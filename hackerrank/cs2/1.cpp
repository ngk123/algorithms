#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
	int n;
	int arr[300003];
	lli sum,avg,ans,temp,cnt,i;
    cin >> n;
	cnt=0;
	ans=0;
	sum=0;
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
		sum+=arr[i];		
	}
	avg=sum/n;	
	
	cnt=0;
	for(i=0;i<n;i++)
	{	
		
		temp=arr[i]-avg;
		cnt+=temp;
		ans+=abs(cnt);		
		//cout << "Cnt " << cnt << endl;
		//cnt+=d[i];
	}
	cout << ans << endl;

	return 0;	
}
