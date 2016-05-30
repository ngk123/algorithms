#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

int bfs(int residual[][200], vector<int>& parent,int s, int t,int n)
{	
	
	vector<int> visited(n,0);
	queue<int> q;
	int minR,p,i,a,j;
	parent[s]=-1;
	q.push(s);		
	while(!(q.empty()))
	{
		a=q.front();
		visited[a]=1;	
		q.pop();
		if(a==t)
		{
			int minR=100000;
			p=parent[t];
			for(i=t;p!=-1;)
			{	
				minR=min(minR,residual[p][i]);
				i=p;
				p=parent[p];
			}			
			return minR;			
		}
		for(j=0;j<n;j++)
		{
			
			if(j!=a && residual[a][j]>0 && visited[j]==0 )
			{
				
				q.push(j);
				parent[j]=a;	
				visited[a]=1;		
			}	
		}		
	}

	return -1;			
}



int main()
{
	int capacity[200][200];
	int residual[200][200]={0};
	int a ,b , s, t,i,j,tempFlow,n,p;
	cin >> n;
	cin >> s >> t;	
	//cout << "S: " << s << " T : " << t << endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin >> 	capacity[i][j];		
		}	
	}	

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			residual[i][j]=capacity[i][j];		
		}	
	}
	int maxFlow=0;
	
	while(1)
	{	
		vector<int> parent(n,-1);
		tempFlow=bfs(residual,parent,s,t,n);
		if(tempFlow==-1)break;
		maxFlow+=tempFlow;
		p=parent[t];
		j=t;
		
		while(p!=-1)	
		{			
			residual[p][j]-=tempFlow;
			residual[j][p]+=tempFlow;
			j=p;
			p=parent[j];			
		}		
	}	
	cout << "Max Flow : " << maxFlow << endl;		
	return 0;		
}
