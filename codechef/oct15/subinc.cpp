#include<bits/stdc++.h>
using namespace std;

int main()
{	
	long long int t,arr[100003],n,i,preI,pre,a;
	long long int ans;
	cin >> t;	
	while(t--)
	{
		cin >> n;
		ans=n;
		cin >> a;
		pre=a;
		preI=0;
		for(i=1;i<n;i++)
		{
			cin >> a;
			if(a<pre)
			{
				if(i>(preI+1))
				{
					ans=ans+((i-preI)*(i-preI-1))/2;
				}
				preI=i;
			}			
			pre=a;
		}		
		if(preI!=(n-1))
		{
			ans=ans+((n-1-preI)*(n-preI))/2;
		}
		cout << ans << endl;		
	}	
	return 0;
}
