#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T,arr[102],maxN,i,n,m,sum;
	cin >> T;
	while(T--)
	{
		cin >> n >> m;
		maxN=-1;
		for(i=0;i<n;i++)
		{
			cin >> arr[i];
			if(maxN<arr[i]) maxN=arr[i];
		}
		sum=0;
		for(i=0;i<n;i++)
		{
			sum+=(maxN-arr[i]);
		}		
		if(m>=sum && (m-sum)%n==0)
		{
			cout << "Yes\n";
		}
		else
		{
			cout << "No\n";
		}		
	}
	return 0;
}
