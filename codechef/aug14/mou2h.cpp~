#include<iostream>
#define mod 1000000007

using namespace std;
typedef long long int lli;
		
		int lo[8000003];
		int cnt[8000003]={0};
		int ans[1000003];
int main()
{
	
	lli ans;
	int T,pre,a,i,N;
	cin >> T;
	while(T--)
	{

		int diff;
		
		cin >> N;
		cin >> pre;
		ans=1;
		for(i=1;i<N;i++)
		{
			cin >> a;
			diff=a-pre+4000000;
			if(i==1)ans=1;
			else
			{
				ans=((ans*2)+1)%mod;
			}
			
			//cout << "ans" << ans << endl;
			if(cnt[diff]>0) ans=(ans-lo[diff])%mod;
			cnt[diff]=1;
			lo[diff]=ans;
			pre=a;
			
		}	
		cout << ans << endl;			
	}
	return 0;
}
