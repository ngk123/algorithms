#include<bits/stdc++.h>
using namespace std;



int main()
{
	long long int t,n,k,temp,i,maxn,a;
	cin >> t;
	long long int ans=1;
	while(t--)
	{
	ans=1;
		cin >> n >> k;
		cin >> maxn;
		for(i=1;i<k;i++)
		{
			cin >> a;
			if(a> maxn)maxn=a;
		}
		ans=ans%maxn;
		for(i=2;i<=n;i++)
		{
			ans=ans*i;
			ans=ans%=maxn;
		}
		
		cout << ans << endl;
	}	

	return 0;
}
