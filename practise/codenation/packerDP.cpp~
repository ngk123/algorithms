#include<bits/stdc++.h>
using namespace std;
int csum[1000];
int w[1000];
int m,p;
int dp[1000][1000];
int calculate()
{	
	int i,j,k;
	for(i=0;i<1000;i++)
	for(j=0;j<1000;j++)
	dp[i][j]=9999999;

	for(i=0;i<p;i++)
	dp[i][0]=csum[i];
	
	for(j=1;j<=m-1;j++){
		for(i=0;i<p;i++){
			for(k=0;k<=i;k++){
				dp[i][j]=min(max(dp[k][j-1],csum[i]-csum[k]),dp[i][j]);	
				}
			}
		}

	return 0;
}


int main()
{
	int i,j;
	cin >> m >> p;
	cin >> w[0];
	csum[0]=w[0];
	for(i=1;i<p;i++)
	{
		cin >> w[i];
		csum[i]=csum[i-1]+w[i];
	}	
	calculate();

	
	cout << dp[p-1][m-1] << endl;		
	return 0;
}
