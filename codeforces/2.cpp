#include<iostream>
using namespace std;
typedef long long int lli;

int main()
{
	int n,i,a[200002],max,min,cMin,cMax,diff;
	long long int ans;
	min=1000000002;
	max=-1;
	cin >> n;
	
	for(i=0;i<n;i++)
	{	
		cin >> a[i];
		if(a[i]>max)max=a[i];
		if(a[i]<min)min=a[i];
	}
	cMin=cMax=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==min)cMin++;
		if(a[i]==max)cMax++;
	}
	
	if(min==max)
	{
		ans=(lli)cMin*(cMin-1);
		diff=0;
		ans=ans/2;
	}
	else
	{
		diff=max-min;
		ans=(lli)cMin*cMax;
	}
		cout << diff << " "<< ans << endl;
	
	return 0;
}
