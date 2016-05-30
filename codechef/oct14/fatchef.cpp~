#include<bits/stdc++.h>
#define mod 1000000009
using namespace std;
typedef pair<int,int> pii;

int main()
{
	int t,n,a,m,i,preC,curC,id,preId;
	long long int temp,ans;
	char c;
	int  arr[100003];
	ios_base::sync_with_stdio(0);
	//ios_base::sync_with_stdio(0)
	
	cin >> t;
	while(t--)
	{
		cin >> n >> m;
		memset(arr,0,sizeof(arr));
		for(i=0;i<m;i++)
		{
			cin >> c >> a;
			arr[a-1]=(int)(c-64);			
		}		
		preC=-1;
		preId=0;
		ans=1;
		for(i=0;i<n;i++)
		{					
			if(arr[i]!=0)
			{
				curC=arr[i];
				if(i==0)
				{
					preC=curC;							
				}
				else if(preC==-1)
				{					
					temp=i-preId;
					preId=i;			
					preC=curC;
				}
				else
				{
					temp=i-preId;
					if(preC!=curC)
					ans=(ans*temp)%mod;
					preId=i;			
					preC=curC;
				}		
			}
		}
		cout << ans << endl;		
	}
	return 0;
}

