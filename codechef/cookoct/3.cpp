#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
typedef long long int lli;

int main()
{
	lli t,n,i,j,sn,c2,cnt;
	
	lli arr[40000];
	lli arr2[40000];
	lli ans[20];
	multiset<lli> a;
	multiset<lli>::iterator it;
	cin >> t;
	while(t--)
	{
		cin >> n;		
		sn=1<<n;
		//memset(visit,0,sn+1);
		for(i=0;i<sn;i++)
		{
			cin >> arr[i];			
		}			
		sort(arr,arr+sn);
		
		for(i=0;i<sn;i++)
		{
			a.insert(arr[i]);
		}
		
		if(sn==2)
		{
			cout << arr[1] << endl;
			a.clear();
			continue;
		}
		cnt=0;
		
		it=a.find(0);
		if(it!=a.end())
		{
			a.erase(it);
		}
		//a.erase(0);
		c2=0;
		//arr2[c2++]=0;		
		
		it=a.find(arr[1]);
		if(it!=a.end())
		{
			a.erase(it);
		}
		//a.erase(arr[1]);
		arr2[c2++]=arr[1];
		it=a.find(arr[2]);
		if(it!=a.end())
		{
			a.erase(it);
		}
		arr2[c2++]=arr[2];
		ans[cnt++]=arr[1];
		ans[cnt++]=arr[2];
		
		//cout << arr[1] << " " << arr[2] << endl;
		
		if(cnt==n)
		{
			for(i=0;i<n;i++)
			{		
				cout << ans[i] << " ";		
			}
			cout << endl;
			a.clear();
			continue;			 
		 }
		//temp=b[arr[1]+arr[2]];
		//cout << "dsfdsf "<<*(a.begin()) << endl ;	
		it=a.find(arr[1]+arr[2]);
		if(it!=a.end())
		{
			a.erase(it);
		}
		//a.begin()
		
		//cout << "dsfdsf "<<*(a.begin()) << endl ;		
		arr2[c2++]=arr[2]+arr[1];
		//c2=2;
		while(1)
		{
			
			ans[cnt++]=*(a.begin());
			it=a.find(ans[cnt-1]);
			if(it!=a.end())
			{
				a.erase(it);
			}
			if(cnt==n)break;
			arr2[c2]=ans[cnt-1];
			for(i=0;i<c2;i++)
			{				
				it=a.find(arr2[i]+ans[cnt-1]);
				if(it!=a.end())
				{
					a.erase(it);
				}	
				//a.erase(arr2[i]+ans[cnt-1]);
				arr2[c2+i+1]=arr2[i]+ans[cnt-1];			
			}		
			c2=c2+i+1;				
		}
		
		for(i=0;i<n;i++)
		{		
			cout << ans[i] << " ";		
		}
		a.clear();
		cout << endl;		
			
	}



	return 0;
}
