#include<bits/stdc++.h>

using namespace std;


int main()
{
	int t,i,j,templ,tempu,tempr,maxPs,h,w;
	int ps[100][100]={0};
	int dp[100][100]={0}; 
	cin >> t;
	while(t--)
	{
		cin >> h >> w;
		for(i=0;i<h;i++)
		{
			for(j=0;j<w;j++)
			{
				cin >> ps[i][j] ;
			}
		}
		for(j=0;j<w;j++)
		{
			dp[0][j]=ps[0][j];
		}
		
		for(i=1;i<h;i++)
		{
			
			for(j=0;j<w;j++)
			{
				tempr=templ=0;
				if(j-1>=0)templ=dp[i-1][j-1];
				tempu=dp[i-1][j];
				if(j+1<w)tempr=dp[i-1][j+1];
				dp[i][j]=max(templ,max(tempu,tempr))+ps[i][j];				
			}	
		}
		
		maxPs=-1;
		
		for(j=0;j<w;j++)
		{
			if(dp[h-1][j]>maxPs)maxPs=dp[h-1][j];
		}				
	
		cout << maxPs << endl;
	}
	return 0;
}
