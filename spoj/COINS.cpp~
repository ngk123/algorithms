#include<bits/stdc++.h>

using namespace std;
long long int amount(int n);
map<int,long long int> dp;
	
int main()
{
	int temp;
	while(cin>>temp){
		cout << amount(temp) << endl;		
 	}
	return 0;
}

long long int amount(int n)
{	
	long long int temp;
	if(n==0)return 0;
	if(dp[n]!=0)return dp[n];			
	
	temp=amount(n/2)+amount(n/3)+amount(n/4);
	if(temp>n)
	dp[n]=temp;
	else
	dp[n]=n;
	
	return dp[n];
}
