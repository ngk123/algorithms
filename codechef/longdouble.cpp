#include<bits/stdc++.h>



using namespace std;

typedef long long int lli;


int main()
{
	long double ans;
	lli temp;
	ans=(long double)1000000000000000000 * 100000000000000000; 
	temp=(lli)(ans/1000000000000000000);
	
	cout << ans <<" Temp " << temp << endl;
	long double lmin = numeric_limits<long double>::min(); // minimum positive value
    long double lmax = numeric_limits<long double>::max();
	
	long long int lmin1 = numeric_limits<long long int>::min(); // minimum positive value
    long long int lmax1 = numeric_limits<long long int>::max();
	
	cout << lmax1  << "  " << lmin1 << endl;
	
	int a[20];
    memset(a, 0, sizeof(a));
    for (int i=0;i<20 ;i++) { a[i]+=1;cout << a[i] << " "; }
   	cout << endl;
	 memset(a, 0, sizeof(a));
    for (int i=0;i<20 ;i++) { cout << a[i] << " "; }
	
	return 0;
}

