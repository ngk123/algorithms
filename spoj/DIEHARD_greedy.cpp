#include<bits/stdc++.h>
using namespace std;

int solve(int h,int a);
int dp[1500][1500];

int main()
{	
	memset(dp,-1,sizeof(dp));	
	int t,life,h,a,ans;
	cin >> t;
	while(t--)
	{
		cin >> h >> a;
		h=h+3;
		a=a+2;
		ans=1;
		while(1)
		{
		  if(h>20&&a<=10) { h = h-17; a=a+7; ans=ans+2;}    //fire&air
		 
		  else if(h>5&&a>10)  {h = h-2; a=a-8; ans=ans+2; }
		  else  //game ends
		  {
			cout<<ans<<endl;
			break;
		  }
		}
	}
	return 0;
}
