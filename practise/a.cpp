#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define mod 1000000007

int arr[101][101];


lli fact(int n)
{
	int i;
	lli ans=1;
	for(i=1;i<=n;i++)
	{
		ans=(ans*i)%mod;
	}
	return ans;	
}


lli solve(int m,int n)
{
	if(m>n) return -1;
	if(arr[n][m]!=-1)return arr[n][m];
	if(m==n) 
	{
		arr[n][m]=fact(n)%mod;
		return arr[n][m];
	}
	arr[n][m]=((m*solve(m,n-1))%mod +(m*solve(m-1,n-1))%mod)%mod;	
	return arr[n][m];
}

int main()
{
	int t,m,n,i,j;
	lli ans;
	for(i=0;i<101;i++)
		for(j=0;j<101;j++)
			arr[i][j]=-1;		
	cin >> t;
	for(i=1;i<=t;i++)
	{
		cin >> m >> n;
		ans=solve(m,n);	
		cout << "Case #"<< i << ": "<<ans << endl;
	}
	return 0;
}

