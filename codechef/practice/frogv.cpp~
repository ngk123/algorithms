#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;

int main()
{
	int n,p,k,i,a,cnt,b;
	int arr2[100002],arr3[100003];
	pii arr[100002];
	cin >> n >> k >> p;	
	for(i=0;i<n;i++)
	{
		cin >> a;
		arr[i]=pii(a,i);
		//cout << arr[i].first <<" "<< arr[i].second << endl;
	}	
	sort(arr,arr+n);	
	for(i=0;i<n;i++)
	{
		arr2[arr[i].second]=i;
	}	
	cnt=1;
	arr3[0]=cnt;
	for(i=1;i<n;i++)
	{
		if((arr[i].first-arr[i-1].first)<=k)
		{
			arr3[i]=cnt;
		}
		else
		{
			cnt++;
			arr3[i]=cnt;
		}
	}
	
	for(i=0;i<p;i++)
	{
		cin >> a >> b;
		a=a-1;
		b=b-1;
		if(arr3[arr2[a]]==arr3[arr2[b]])cout << "Yes\n";
		else cout << "No\n";		
	}
	
	return 0;
}
