#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,weight[10011][2],n,m,x,i,j,k,w[101],c[101],cnt,ans;
	cin >> t;
	
	while(t--)
	{
		memset(weight,0,sizeof(weight));
		cin >> n >> m>> x;
		for(i=0;i<n;i++)
		{
			cin >> w[i];
		}
		for(i=0;i<n;i++)
		{
			cin >> c[i];
		}
		for(j=0;j<n;j++)
		{	
			if(c[j]==1 && w[j]<=x)
			weight[w[j]][0]=1;	
		}
		for(i=2;i<=m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(c[j]==i)
				{
					for(k=0;k<=x;k++)
					{
						if(weight[k][i%2]==i-1 && k+w[j]<=x)
						{
							weight[k+w[j]][(i+1)%2]=i;
						}
					}				
				}			
			}
		}
		for(i=x;i>=0;i--)
		{
			if(weight[i][(m+1)%2]==m)
			{
				ans=i;
				break;
			}
		}
		if(i==-1)
		{
			cout << i << endl;
		}	
		else
		{
			cout << x-ans << endl;
		}				
	}
	return 0;
	
}