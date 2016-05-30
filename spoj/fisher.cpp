#include<iostream>
#include<cstdio>
#define infinite 1000000007
using namespace std;

int tvt[50][50];
int toll[50][50];
int dp[1000][50];

int main()
{
	int n,t,nt,i,j,timeL,bTime,minT;
	while(scanf("%d%d",&n,&timeL)==2 && n>0)
	{
		for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		scanf("%d",&tvt[i][j]);
				
		for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		scanf("%d",&toll[i][j]);
		
		for(t=0;t<=timeL;t++)
		for(i=0;i<n;i++)dp[t][i]=infinite;	
	
		dp[0][0]=0;
		
		for(t=0;t<=timeL;t++)
		{
			for(i=0;i<n;i++)
			{		
			    if(t<timeL)
				dp[t+1][i]=min(dp[t+1][i],dp[t][i]);					
				for(j=0;j<n;j++)
				{
					if(dp[t][i]!=infinite)
					{
						nt=t+tvt[i][j];
						if(nt<=timeL)
						{
							dp[nt][j]=min(dp[nt][j], dp[t][i]+toll[i][j]);
						}
					}					
				}			
			}
		
		}
	
		minT=dp[timeL][n-1];
		for(i=0;i<=timeL;i++)
		{
			if(dp[i][n-1]==minT)
			{
				bTime=i;
				break;		
			}
		}
		cout << minT << " " << bTime << endl;
	}	
	return 0;
}
