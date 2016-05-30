#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

typedef pair<int,lli> pii;

typedef struct edge{
int a;
int b;
lli w;
}edge;

bool comp(edge one,edge two)
{
	return one.w<two.w;
}
lli arr[2001][2001];
vector<pii> con[2001];


int main()
{	
	int n,i,j,flag,a,b,check,t2;
	//return 1;	
	vector<edge> t;
	edge temp;
	cin >> n;
	flag=0;	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin >> arr[i][j];	
			if(i!=j && i>j)
			{
				temp.a=i;
				temp.b=j;
				temp.w=arr[i][j];
				t.push_back(temp);
			}
			if(i==j && arr[i][j]!=0) flag=1;
			if(i!=j && arr[i][j]==0) flag=1;
		}
	}
	
	
	if(flag==1){
		cout << "NO\n";
		return 0;
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(arr[i][j]!=arr[j][i])
			{
				flag=1;
				break;				
			}
				
		}
		if(flag==1)break;
	
	}
	
	if(flag==1){
		cout << "NO\n";
		return 0;
	}
	
	
	
	
	sort(t.begin(),t.end(),comp);
	int cnt=0,one,two,temp2,p1,p2;
	int dsu[2002];
	
	for(i=0;i<n;i++)
	dsu[i]=-1;
	
	
	
	
	for(i=0;i<t.size();i++)
	{
		if(cnt==n-1)break;
		one=t[i].a;
		two=t[i].b;
		
		
		if(dsu[one]==-1 && dsu[two]==-1)
		{
			
			dsu[one]=two;
			dsu[two]=two;
		 	con[t[i].a].push_back(pii(t[i].b,arr[t[i].a][t[i].b]));
			con[t[i].b].push_back(pii(t[i].a,arr[t[i].a][t[i].b]));
			cnt++;
			continue;
		}
		
		if(dsu[one]==-1)
		 { 		 
		 	temp2=two;
		
			while(dsu[temp2]!=temp2)
			{
				temp2=dsu[temp2];	
			}
			
			p2=temp2;
			
		 	dsu[one]=dsu[two]=p2;
		 	con[t[i].a].push_back(pii(t[i].b,arr[t[i].a][t[i].b]));
			con[t[i].b].push_back(pii(t[i].a,arr[t[i].a][t[i].b]));
			cnt++;
			continue;
		 }
		if(dsu[two]==-1) 
		{
				
			temp2=one;
			while(dsu[temp2]!=temp2)
			{
				temp2=dsu[temp2];	
			}
		
			p1=temp2;
		
			dsu[one]=dsu[two]=p1;
			con[t[i].a].push_back(pii(t[i].b,arr[t[i].a][t[i].b]));
			con[t[i].b].push_back(pii(t[i].a,arr[t[i].a][t[i].b]));	 
			cnt++;
			continue;
		}
		
		temp2=one;
		while(dsu[temp2]!=temp2)
		{
			temp2=dsu[temp2];	
		}
		
		p1=temp2;
		
		temp2=two;
		
		while(dsu[temp2]!=temp2)
		{
			temp2=dsu[temp2];	
		}
		p2=temp2;
		
		
		if(p1==p2)
		{
			dsu[one]=dsu[two]=p1;
			continue;
		}
		else
		{
			dsu[p1]=dsu[one]=dsu[two]=p2;
			dsu[two]=one;con[t[i].a].push_back(pii(t[i].b,arr[t[i].a][t[i].b]));
			con[t[i].b].push_back(pii(t[i].a,arr[t[i].a][t[i].b]));	 
			cnt++;
			continue;
			
		}			
			
	}	
/*	
	for(i=0;i<n;i++)
	{
		cout << "vertex " << i << " :";
		for(j=0;j<con[i].size();j++)
		{
			cout << con[i][j].first << " " << con[i][j].second << " ";
		}
	 	cout << endl;
	}*/
	
	pii d;
	queue<pii> c;
	lli weight[2001]={0};
	int visited[2001]={0};
	
	for(j=0;j<n;j++)
	{
	
		c.push(pii(j,0));
		weight[j]=0;
		//visited[j]=1;
		while(!c.empty())
		{
			//cout << "Hiii\n";
			//cout << con[d].size()<<"Hiii\n";
			d=c.front();
			//cout << "d.first" << d.first << endl;
			c.pop();
			visited[d.first]=1;
			t2=con[d.first].size();
			for(i=0;i<t2;i++)
			{	
				//cout << "Okkkk\n";
				if(visited[con[d.first][i].first]!=1)
				{
					weight[con[d.first][i].first]=d.second+con[d.first][i].second; //arr[d.first][con[d.first][i]];
					c.push(pii(con[d.first][i].first,weight[con[d.first][i].first]));					
				}			
			}
	
		}
		
		for(i=0;i<n;i++)
		{
			//cout << weight[i] << " ";
			if(arr[j][i]!=weight[i] ){ flag=1; break;}
			
			
			
			weight[i]=0;
			visited[i]=0;
		}	
		
		
		
		//cout << endl;
		
		
		
	}
	
	if(flag==1) cout << "NO\n";
	else cout << "YES\n"; 
	
	
	return 0;
}
