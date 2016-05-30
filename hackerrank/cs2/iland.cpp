#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main()
{
	int n,q,arr[200002],idx[200002],a,b,k,i,cnt,v,tempid1,tempid2;
	
	cin >> n >> q;
	
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
		idx[arr[i]]=i;
	}	
	
	for(k=0;k<q;k++)
	{
		cin >> v ;
		if(v==1)
		{
			cin >> a >>b;
			tempid1=idx[a];
			tempid2=idx[b];
			arr[tempid1]=b;
			arr[tempid2]=a;
		}
		else
		{
			
			
			cin >> a;
			cnt=1;
			i=0;
			//
			
			
			for(i=1;i<n;i++)
			{	
				if(arr[i-1]>a && arr[i]<=a)
					{
					  cnt++;
					 // cout << "i  : " << i << endl;								
					}
			}
			
			cout << cnt << endl;
		}
		
	}
	
	
	



}
