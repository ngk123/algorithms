#include<iostream>
#include<string>
using namespace std;
#define mod 1000000007
typedef long long int lli;

int main()
{
	int T,i,len;
	string str;
	lli ans;
	cin >> T;	
	
	while(T--)
	{
		cin >> str;
		len=str.length();
		ans=1;
		for(i=0;i<len;i++)
		{
			
			
			if(i%2==0 && str[i]=='l')
			{
				ans=ans*2;
				ans=ans%mod;
			}
			else if(i%2==0  && str[i]=='r')
			{
				ans=ans*2+2;
				ans=ans%mod;
			}
			
			if(i%2==1 && str[i]=='l')
			{
				ans=ans*2-1;
				ans=ans%mod;
			}
			else if(i%2==1  && str[i]=='r')
			{
				ans=ans*2+1;
				ans=ans%mod;
			}
			
		}
		cout << ans << endl;
	
	
	}
	return 0;
}
