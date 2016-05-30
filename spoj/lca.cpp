#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,par[2001],m,a,visited[2001],b,k,i,j,q;
	cin >> t;	
	for(k=1;k<=t;k++)
	{
		printf("Case %d:\n",k);
		cin>>n;
		memset(par,0,sizeof(par));
		for(i=0;i<n;i++)
		{
			scanf("%d",&m);
			for(j=0;j<m;j++)
			{
				scanf("%d",&a);
				par[a]=i+1;				
			}				
		}	
		cin >> q;	
		for(i=0;i<q;i++)
		{
			scanf("%d%d",&a,&b);
			memset(visited,0,sizeof(visited));
			visited[a]=1;			
			while(par[a]!=0)
			{
				visited[par[a]]=1;
				a=par[a];							
			}			
			while(visited[b]==0)
			{
				visited[b]=1;
				b=par[b];
			}			
			printf("%d\n",b);				
		}		
	}
	return 0;
}
