#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int bfs( int res[][200],vector<int>& parent,int s, int f,int n)
{
	vector<int> visited(n,0);
	queue<int> q;
	int i,minR,j,p,a;
	q.push(s);		
	while(!(q.empty()))
	{
		a=q.front();
		q.pop();
		if(a==f)
		{
			minR=300;
			j=f;
			p=parent[j];
			while(1)
			{
				if(p==-1)break;
				minR=min(res[p][j],minR);
				j=p;
				p=parent[j];							
			}		
			return minR;
		}		
		visited[a]=1;
		for(i=0;i<n;i++)
		{
			if(visited[i]==0 && res[a][i]>0)
			{
				q.push(i);
				parent[i]=a;
				visited[i]=1;			
			}				
		}
	}
	return -1;
}


int main()
{	
	int t,s,f,i,n,j,tempFlow,maxFlow,a,b,p;
	cin >> t;
	
	while(t--)
	{
		int res[200][200]={0};		
		cin >> n;		
		for(i=0;i<n-1;i++)
		{
			cin >> a;			
			for(j=0;j<a;j++)
			{
				cin >> b;
				if(i==0)				
					res[i][b-1]=1;
				else if(b-1==n-1)
				{
					res[i][b-1]=1;
				}
				else
				{
					res[i][b-1]=201;
				}
			
				
			}			
		}
		s=0;
		f=n-1;
		maxFlow=0;
		while(1)
		{
			vector<int> parent(n,-1);
			tempFlow=bfs(res,parent,s,f,n);
			if(tempFlow==-1) break;
			maxFlow+=tempFlow;
			j=f;
			p=parent[j];
			while(1)
			{	
				if(p==-1)break;
				res[p][j]-=tempFlow;
				res[j][p]+=tempFlow;
				j=p;
				p=parent[j];
			}		
		}
		cout << maxFlow << endl;			
	}
	return 0;
}

