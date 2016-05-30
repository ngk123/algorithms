#include<iostream>
#define MAX 1000000007
typedef long long lli;
using namespace std;
lli modPower(lli base, lli m);

int main()
{
	lli T,a,ans1,i,inv;
	lli ans;
	cin >> T;
	inv=modPower(25,1000000005);
	for(i=0;i<T;i++)
	{
		cin>> a;
		ans1=modPower(26,a/2);
		if(a==1)
		{
			ans=26;
		}
		else if(a%2==0)
		{
			ans=((ans1-1)*2)%MAX;
			ans=(ans*inv)%MAX;
			ans=(ans*26)%MAX;
		}
		else
		{
			ans=((ans1-1)*2)%MAX;
			ans=(ans*inv)%MAX;
			ans=(ans*26)%MAX;
			ans+=modPower(26,a/2+1)%MAX;
			
		}
		cout << ans << endl;
	}
	return 0;
}


lli modPower(lli base, lli m)
{
	lli temp1,temp3;
	lli temp2,a,dig;
	temp2=m;
	temp1=1;
	temp3=base;
	while(temp2>0)
	{
		dig=temp2&1;
		if(dig==1)
		{
			temp1=(temp1*temp3)%MAX;
		}	
		temp3=(temp3*temp3)%MAX;	
		temp2=temp2>>1;
	}
	return temp1;	
	
}
