#include<iostream>
using namespace std;
int main()
{
	int T,n,m,d,arr[1000001],base,idx,i;
	char op;
	cin >> n >> m;
	for(i=0;i<n;i++)
	{
		cin >> 	arr[i];
	}
	base=0;
	for(i=0;i<m;i++)
	{
		cin >> op >> d;
		if(op=='R')
		{
		   idx=(d-1-base)%n;
		   if(idx<0)idx+=n;		   
		   cout << arr[idx] << endl;
		}
		else if(op=='C')
		{
			base=base-d;
		}	
		else if(op=='A')
		{
			base+=d;
		}
	}
	return 0;
}
