#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pii;
vi edge[2001];	
int visited[2001]={0};
int levels[2001]={0};
int parent[2001]={0};
int visited2[2001];
int bfs(int i, int level)
{
	int a,b,j;
	queue<pii> Q;
	pii temp;
	memset(levels,0,sizeof(levels));
	parent[i]=-1;
	Q.push(pii(i,level));		
	while(!Q.empty())
	{
		temp=Q.front();
		Q.pop();
		a=temp.first;
		//cout << "a : " << a << endl;
		b=temp.second;
		visited[a]=1;
		levels[a]=b;
		for(j=0;j<edge[a].size();j++)
		{
			
			if(visited[edge[a][j]]==1)
			{
				//cout << "cycle : " << edge[a][j] << endl;
				if(edge[a][j]!=parent[a] && (levels[edge[a][j]]%2)==((b+1)%2))
				{
					return 1;
				}	
			}		
			else
			{
				Q.push(pii(edge[a][j],b+1));			
				parent[edge[a][j]]=a;
			}			
		}	
	}
	return 0;

}

int main()
{	
	int t,n,m,flag,i,k,a,b;	
	cin >> t;
	for(k=1;k<=t;k++)
	{
		flag=0;
		memset(visited,0,sizeof(visited));	
		memset(parent,0,sizeof(parent));	
		cout << "Scenario #"<<k <<":"<< endl;
		cin >> n >> m;
		for(i=0;i<m;i++)
		{
			cin >> a >> b;
			edge[a-1].push_back(b-1);
			edge[b-1].push_back(a-1);
		}		
		for(i=0;i<n;i++)
		{
			if(visited[i]==0)
			{
				flag=bfs(i,0);			
				if(flag==1)
				{
					break;
				}			
			}	
		}		
		if(flag==1)
		{
			cout << "Suspicious bugs found!\n";
		}
		else
		{
			cout << "No suspicious bugs found!\n";
		}	
		
		for(i=0;i<n;i++)
		{
			edge[i].clear();
		}
	}
	return 0;
}
