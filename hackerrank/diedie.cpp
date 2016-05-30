#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define mod 1000000007

lli fastExpo(lli a, lli b);

int main()
{
	lli t,n,i;
	lli b,ans;
	cin >> t;
	while(t--)
	{	
		cin >> n;
		// Porb = P/Q;		
		b=(n-1)*(mod-2);
		ans=fastExpo(2,n-1)	;
		ans=fastExpo(ans,mod-2);
		ans=ans%mod;
		cout << ans << endl;
	}	
	return 0;
}

lli fastExpo(lli a, lli b)
{
	lli tempExpo, base=a, temp=1;
	tempExpo=b;
	while(tempExpo>0)
	{
		if(tempExpo%2==1)
		{
			temp=temp*base;
			temp=temp%mod;			
		}
		base=base*base;
		base=base % mod;
		tempExpo=tempExpo/2;
	}
	return temp;
}