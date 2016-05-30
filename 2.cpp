#include<bits/stdc++.h>
using namespace std;

int main()
{
long long int arr[1002]={0};
long long int arr2[1000100]={0};
long long int sum;
int n,k,i,a,j;

cin >> n >> k;
	for(i=0;i<n;i++)
	{
		cin >> a;
		arr[a]+=1;
	}

	for(i=0;i<=1000;i++)
	{
		for(j=0;j<=1000;j++)
		{
			if(arr[i]>0 && arr[j]>0)
			{
				arr2[i*j]+=arr[i]*arr[j];
			}
		}
	}
	//cout << k << endl;
	sum=0;
	for(i=1000001;i>=0;i--)
	{
		sum+=arr2[i];
		//cout << sum << 
		if(sum>=k)
		{
			break;
		}	
	}
	
	cout << i << endl;
	return 0;
}
