#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,arr[100002],cnt,i,b;
	
	cin >> t;
	
	while(t--)
	{
		memset(arr,0,sizeof(arr));
		cin >> n;
		cnt=0;
		for(i=0;i<n;i++)
		{
			cin >> b;
			if(arr[b]==0)
			{
				cnt++;
				arr[b]=1;
			}
		}
		cout << cnt << endl;
	
	}
	
	
	
}
