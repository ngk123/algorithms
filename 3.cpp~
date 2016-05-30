#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int lli;
lli arr[1002]={0};

int main()
{
	int t,n,a,i;
	
	cin >> t;
	
	arr[1]=0;
	arr[2]=1;
	for(i=3;i<=1000;i++)
	{
		arr[i]=(arr[i-1]*i)%mod;
		arr[i]=(arr[i]*(i-1))%mod;	
	}
	while(t--)
	{
		cin >> a;
		cout << arr[a] << endl;	
	}	
	
	return 0;
}
