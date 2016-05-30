#include<iostream>
#include<queue>
#include<vector>
#include<cstdio>

using namespace std;
typedef vector<int> vi;
 
vi edges[1000];
int visited[1000];

int bfs(int v , int *visited)
{
	int len,i,b;
	queue<int> q;
	q.push(v);
	while(!(q.empty()))
	{
		b=q.front();
		if(visited[b]==0)
		{
			visited[b]=1;
			cout << b+1 << " " ;		
		
			len=edges[b].size();
			for(i=0;i<len;i++)
			{
				if(visited[edges[b][i]]==0)	
				q.push(edges[b][i]);		
			}
		}	
		q.pop();	
	}
	
}

int dfs(int v ,int *visited)
{
	int len,i;
	cout << v+1 << " " ; 
	len=edges[v].size();
	visited[v]=1;
	for(i=0;i<len;i++)
	{
		if(visited[edges[v][i]]==0)
		{
			dfs(edges[v][i], visited);
		}	
	}
}


int main()
{
	int T,n,c,i,j,a,t,nbr,idx,v;
	
	cin >>T;
	c=T;
	while(T--)
	{
		cin >> n;
		cout << "graph " <<c-T<< endl;	
		for(i=0;i<n;i++)
		{
			cin >> idx >> nbr;
			for(j=0;j<nbr;j++)
			{	
				cin >> a;
				edges[idx-1].push_back(a-1);
			}					
		}	
		
		while(scanf("%d%d",&v,&t)==2)	
		{
			if(v==0 && t==0) break;;
			if(t==1)
			{
				for(i=0;i<n;i++)
				visited[i]=0;
				bfs(v-1,visited);
				cout << endl;
			}
			else if(t==0)
			{
				for(i=0;i<n;i++)
				visited[i]=0;
				dfs(v-1,visited);
				cout << endl;
			}
			
		}		
		
		for(i=0;i<n;i++)
		edges[i].clear();
		//cout << v;
		//n=v;		
	}
	
	return 0;
}


