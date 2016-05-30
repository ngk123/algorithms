#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pii;
vi edge[301];
queue<pii> Q;

vi level(301,0);

int bfs(int id,int n)
{
	pii temp;
	int i,a,b,vs;
	vi visited(n,0);
	temp.first=id;
	temp.second=0;
	Q.push(temp);	
	
	while(!Q.empty())
	{
		temp=Q.front();
		Q.pop();
		a=temp.first;
		b=temp.second;
		visited[a]=1;
		vs=edge[a].size();
		for(i=0;i<vs;i++)
		{		
			if(visited[edge[a][i]]!=1)
			{
				temp.first=edge[a][i];
				temp.second=b+1;
				//visited[temp.first]=1;
				Q.push(temp);				
			}
		}
	}	
	return b;
}


int bfs2(int id,int n)
{
	pii temp;
	int i,a,b,vs;
	vi visited(n+1,0);
	temp.first=id;
	temp.second=0;
	Q.push(temp);
	
	
	while(!Q.empty())
	{
		temp=Q.front();
		Q.pop();
		a=temp.first;
		b=temp.second;
		//cout << "a : " << a << endl;
		level[b]+=1;
		visited[a]=1;
		vs=edge[a].size();
		for(i=0;i<vs;i++)
		{		
			if(visited[edge[a][i]]!=1)
			{
				pii temp1;
				temp1.first=edge[a][i];
				temp1.second=b+1;
				//visited[temp1.first]=1;
				//cout << "t.fir " << temp1.first << " t.sec : " << temp1.second << endl;  
				Q.push(temp1);	 			
			}
		}
	}	
	return b;
}

int main()
{
	int n,k,a,b,i,maxH,h,maxId,ans,j,start,end;
	cin >> n >> k;

	for(i=0;i<n-1;i++)
	{
		cin >> a >> b;
		edge[a-1].push_back(b-1);
		edge[b-1].push_back(a-1);		
	}

	
	maxId=-1;
	maxH=-1;
	for(i=0;i<n;i++)
	{
		h=bfs(i,n);
		if(h>maxH)
		{
			maxH=h;
			maxId=i;				
		}	
	}
	//cout << "MaxId: " << maxId << "maxH: " << maxH << endl;	
	bfs2(maxId,n);
	/*
	for(i=0;i<=maxH;i++)
	{
		cout << "Level : " << i << " total : " << level[i] << endl;
	}
	*/
	
	
	/*
	for(i=maxH;i>=0;i--)
	{
		if(level[i]>k)
		{
			ans=i;
			break;
		}
		else if(level[i]<k)
		{
			k=k-level[i];	
		}
		else
		{
			k=0;
			ans=i-1;
			break;					
		}	
	
	}*/
	start=0; end=maxH;
	while(1)
	{
		if(level[start+1]==1 && k>0)
		{
			start++;
			k--;
		}	
		else
		{
			break;
		}
	
	}
	
	
	for(i=maxH;i>=start;i--)
	{
		if(level[i]>k)
		{
			ans=i-start;
			break;
		}
		else if(level[i]<k)
		{
			k=k-level[i];	
		}
		else
		{
			k=0;
			ans=i-1-start;
			break;					
		}	
	
	}
	
	
	
	
	
	if(ans<0)ans=0;
	cout << ans << endl;	
//	
return 0;

}
