#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
	lli ans;
	int t,n,temp;
	cin >> t;
	while(t--)
	{
		cin >> n;
		n=n+1;
		ans=0;
		if(n%2==1)
		{
			temp=n/2;
			ans=ans+2LL*n*temp;
			ans=ans+temp;
			ans=ans-temp*(2LL*temp);		
		}
		else
		{
			temp=n/2;
			ans=ans+2LL*n*temp;
			ans=ans+temp;
			ans=ans-(lli)temp*(2LL*temp);
			ans=ans-1;		
		}
		
		cout << ans << endl;
		
	
	}
	

	return 0;
}
