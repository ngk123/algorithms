#include<bits/stdc++.h>
using namespace std;

int n,m,maxPath;
int arr[101][101];
int visited[101][101];
int dfs(int i,int j,int path)
{
	int a,b;
	if(visited[i][j]==1)return path;
	visited[i][j]=1;
	if(i>=(n-1) && j>=(m-1))
	return path;
	
	if(i==(n-1) && arr[i][j+1]<=arr[i][j])
	return path;
	
	if(j==(m-1) && arr[i+1][j]<=arr[i][j])
	return path;
	
	if(arr[i+1][j]<=arr[i][j] && arr[i][j+1]<=arr[i][j])
	return path;
	 
	a=0;
	b=0;
	if(arr[i+1][j]>arr[i][j]) a=dfs(i+1,j,path+1); 
	if(arr[i][j+1]>arr[i][j]) b=dfs(i,j+1,path+1);	
	return max(a,b);
}

int main()
{
	int t,i,j;
	cin >> t;
	while(t--)
	{
		memset(visited,0,sizeof(visited));
		memset(arr,0,sizeof(visited));
		cin >> n >> m;
		for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		cin >> arr[i][j];
		cout << dfs(0,0,1) << endl; 
	}		
	return 0;
}
