#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,ans,i,j;
	string s;
	ans=0;
	bitset<2001> arr[2001];
	cin >> n;
	for(i=0;i<n;i++)
	{	
		cin >> s;
		for(j=0;j<n;j++)
			if(s[j]=='1')
			{
				arr[i].set(j);
			}
	}

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(!arr[i].test(j) && (arr[i]&arr[j]).any())
			{
				ans+=2;
			}
		}
	}
	
	cout << ans << endl;

	return 0 ;
}
