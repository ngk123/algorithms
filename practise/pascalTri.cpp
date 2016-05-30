#include<bits/stdc++.h>
using namespace std;

void pascal(int arr[],int n)
{
	int i,arr2[100];
	if(n==1) 
	{
		cout << arr[0] << endl;
		return;
	}
	else
	{
		for(i=0;i<n-1;i++)
		{
			arr2[i]=arr[i]+arr[i+1];
		}		
		pascal(arr2,n-1);		
		for(i=0;i<n;i++)
		{
			cout << arr[i] << " ";
		}	
		cout << endl;
	}
}

int main()
{
	int n,arr[100],i;
	cin >> n;	
	for(i=0;i<n;i++)
	{
		cin >> arr[i];	
	}	
	pascal(arr,n);
	return 0;
}

