#include<bits/stdc++.h>
using namespace std;


int calbool(int n,int[] arr, int dp[][100] ,int k)
{
	for(i=0;i<n;i++)
	{	
		for(j=i;j<n;j++)
		{
			if(j-i<=1) dp[i][j]=0;
			else if(j-i==2)
			{
				if(arr[j]-arr[j-1]==arr[j-1]-arr[i] && arr[j-1]-arr[i]==k) arr[i][j]=1;
				else
				arr[i][j]=0;				
			}
			else
			{
				if(arr)
			
			}
			
		
		}
	}
}


int main()
{
	int  t,arr[101],dp[101][101],n,k;
	
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		memset(dp,0,sizeof(dp));
		for(i=0;i<n;i++)
		cin >> arr[i];
		calbool(n,arr,dp,k);
	
	}
	
	return 0;
}
