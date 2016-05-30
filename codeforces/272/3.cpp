#include<iostream>
using namespace std;
#define mod 1000000007;
typedef long long int lli;

int main()
{

	int a,b;
	lli sum1,sum2,sum3;
	cin >> a >> b; 
	sum3=(((b-1LL)*b)/2LL)%mod;
	sum1=(sum3*a)%mod;	
	sum2=(((a+1LL)*a)/2LL)%mod;
	sum2=(sum2*b)%mod;
	
	sum2= (sum2* sum3) %mod;
	//sum2=(sum2* (b*(b-1LL))/2LL)%mod))%mod;	
	
	sum1=(sum1+sum2)%mod;	
	cout << sum1 << endl;
	
	return 0;
}
