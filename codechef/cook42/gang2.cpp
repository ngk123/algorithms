#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
//typedef vector<pii> vpii;
int main()
{
	int T,n,x,cnt,ans,i;
	pii arr[401];
	cin >> T;
	while(T--)
	{
		cin >> n >> x;
		ans=0;
		for(i=0;i<n;i++)
		{
			cin >> arr[2*i].first ;
			arr[2*i].second=1;			
			cin >> arr[2*i+1].first ;
			arr[2*i+1].second=0;			
		}		
		sort(arr,arr+2*n);	
		/*
		for(i=0;i<2*n;i++)
		{
			cout << arr[i].first << " " << arr[i].second << endl;
		}
		*/
			
		cnt=0;
		for(i=0;i<2*n;i++)
		{
			if(arr[i].second==1) 
			{
				cnt++;
				if(cnt>=x) ans++;				
			}
			else 
			{
				cnt--;			
			}		
		}				
		cout << ans << endl;					
	}
	return 0;
}
