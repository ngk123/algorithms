#include<bits/stdc++.h>
using namespace std;

int solve(int h,int a);
int dp[1500][1500];

int main()
{	
	memset(dp,-1,sizeof(dp));	
	int t,life,h,a;
	cin >> t;
	while(t--)
	{
		cin >> h >> a;
		cout << solve(h,a) << endl;
	}
	return 0;
}


int solve(int h,int a)
{
	if(h<=0 || a<=0) return -1;
	else if(dp[h][a]==-1)
	{
		dp[h][a]=max(solve(h-2,a-8),solve(h-17,a+7))+2;	
	}		
	return dp[h][a];		
}
