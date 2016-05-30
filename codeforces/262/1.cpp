#include<iostream>
using namespace std;

int main()
{
	long long int n,m,ans,temp,base,count;
	
	ans=0;
	
	cin >> n >> m;
	/*base=1;
	ans+=n;
	while(1)
	{
		base=m*base;
		ans+=(n/base);
		temp=(n/base);
		if(temp==0)break;
	}	
	cout << ans << endl;*/
	count=0;
	while(1)
	{
		n=n-1;
		count++;
		if(count%m==0)n=n+1;
		if(n==0)break;	
	}	
	cout << count << endl;
 return 0;
}
