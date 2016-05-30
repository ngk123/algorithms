#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pair<int,int> > vpii;
vi edge[100001];
vi visited(100001,0);

int dfs(int node,int parent)
{
	int vsize,check,i,flag;
	vsize=edge[node].size();
	if(vsize==1)
	{
		return 0;	
	}
	check=0;
	for(i=0;i<vsize;i++)
	{
		if(edge[node][i]!=parent)
		{
			flag=dfs(edge[node][i],node);
			if(flag==0)
			{
				check=1;
			}
		
		}	
		
		
	}
	
	if(check==1){visited[node]=1; return 1;}
	else return 0;
	

	
}


int main()
{
	int n,i,a,b,cnt,level,vtx,pLevel,vSize,check,flag;
	cin >> n;
	for(i=0;i<(n-1);i++)
	{
		cin >> a >> b; 
		edge[a-1].push_back(b-1);
		edge[b-1].push_back(a-1);
	}
	check=0;	
	for(i=0;i<edge[0].size();i++)
	{
		flag=dfs(edge[0][i],0);	
		if(flag==0)check=1;
	}
	if(check==1)visited[0]=1;
	for(i=0;i<n;i++)
	{
		if(visited[i]==1)cnt++;
	}
	cout << cnt << endl;
	return 0;
}
