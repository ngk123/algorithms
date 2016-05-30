#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli n;
lli dp[31][21];
unsigned int findn(int i,int j)
{	
	unsigned int k,temp;
	temp=(n>>i);
	//cout << "temp" << temp << " n "<< n << endl;
	for(k=0;k<j;k++)
	{
		temp=temp/3;
	}
	return temp;
}


lli solve(int i,int j)
{
	unsigned int current=findn(i,j);	
	//cout << current << endl;
	if(current<12)
	{
		dp[i][j]=current;
		return current;
	}
	if(dp[i][j]==0)
	{
		dp[i][j]=solve(i+1,j)+solve(i,j+1)+solve(i+2,j);
	}
	return dp[i][j];
}


int main()
{
	
	while(cin>>n)
	{
		memset(dp,0,sizeof(dp));		
		cout << solve(0,0)<<endl;
	}

}
