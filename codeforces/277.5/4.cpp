#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

vector<int> edges[30001];
int visited[3000];
int n;
long long int bfs(int id)
{
	int a,b ,i,j;
	pii temp;
	queue<pii> Q;
	int par[3001]={0};
	Q.push(pii(id,0));
	temp=Q.front();
	a=temp.first;
	b=temp.second;
	Q.pop();
	//visited[a]=1;
		
	for(i=0;i<edges[a].size();i++)
		{
			Q.push(pii(edges[a][i],b+1));
		}	
		
	
	while(!Q.empty())
	{
		temp=Q.front();
		Q.pop();
		a=temp.first;
		for(j=0;j<edges[a].size();j++)
		{
			if(edges[a][j]!=id)
			par[edges[a][j]]++;
		}	
	}	
	long long int cnt=0;
	for(i=1;i<=n;i++)
	{
		if(par[i]>=2)
		{
			cnt+=(par[i]*(par[i]-1))/2;
		}
	}
	
	return cnt;
	
}

int main()
{
	int m,i,a,b;
	long long int cnt=0;
	cin >> n >> m;
	for(i=0;i<m;i++)
	{
		cin >> a >> b;
		edges[a].push_back(b);
	}
	
	for(i=1;i<=n;i++)
	{
		cnt+=bfs(i);
	}
	cout << cnt << endl;
	
	return 0;
}
