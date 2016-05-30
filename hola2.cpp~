#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int lli;
lli dp[5002][5002]={0};
int main()
{
	lli t,n,sum,i,j;

	
	for(i=1;i<5002;i++)
	{
		dp[i][1]=1;
	}

	for(j=2 ; j <5002 ;j++)
	{
		for(i=2;i<5002;i++)
		{
			dp[i][j]=((dp[i-1][j-1]*j)%mod+(dp[i-1][j]*j)%mod)%mod;	
		}
	}
	/*
	for(i=1 ; i< 5; i++)
	{for(j=1;j<5;j++)
	{
	cout << dp[i][j] << " ";
	}cout << endl ;
	}
	*/
	cin >> t;
	
	while(t--)
	{
		cin >> n;
		sum=0;
		for(j=0;j<5002;j++)
		{
//			cout << dp[n][j] << " ";
			sum=(sum+dp[n][j])%mod;
			sum=sum%mod;
		}
		
		cout << sum << endl;
		
	}
	
	
	
	return 0;
}
