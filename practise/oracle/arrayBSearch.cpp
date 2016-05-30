#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[]={10,25,11,22,33,20,24};
	sort(arr,arr+7);
	
	int *p=lower_bound(arr,arr+7,35);
	int a=p-arr;
	cout << a << endl;
	if(p!=(arr+7))
	{
		cout << *p << endl;
	}
	
	return 0;
}
