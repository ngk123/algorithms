#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
int visited[2001]; 
queue<pii> Q; 
 vector<int> edges[2001];
 int par[2001];
int bfs(int id)
{
	
	int c,d,i;
	Q.push(pii(0,-1));
	
	while(!Q.empty())
	{
		temp=Q.front();
		Q.pop();
		c=temp.first;
		d=temp.second;
		if(visited[c]==0)
		{
			visited[c]=1;
			par[c]=d;
			for(i=0;i<edges[c].size();i++)
			{
				if(visited[edges[c][i]]==0)
				{
					Q.push(pii(edges[c][i],c));	
				}
			}			
		}
	}	
}

int main()
{
	int arr[2001],par[2001];	
	cin >> d >> n ;
	
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	
	for(i=0;i<n;i++)
	{
		cin >> a >> b;
		edge[a-1].push_back(b-1);	
	}	
	bfs(0);
	for(i=0;i<n;i++)
	{
		cnt=0;
		if(arr[i]<=d)cnt++
		while(
		
	}
	
	return 0;		
}

