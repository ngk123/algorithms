#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,n,k,arr[102],flag,mod1,mod2,modv,cnt,i;

	cin >> t;
	
	while(t--)
	{
		cin >> n >> k;
		cin >> arr[0];
		mod1=arr[0]%(k+1);
		if(mod1<0)mod1+=k+1;
		
		cin >> arr[1];
		mod2=arr[1]%(k+1);
		if(mod2<0)mod2+=k+1;

		if(n==2) { 
		cout << "YES\n";
		continue;
		}
				
		flag=0;
		cnt=0;
		if(mod1==mod2)
		{
			modv=mod1;
			flag=1;
			cnt=2;
		}		
		
		for(i=2;i<n;i++)
		{
			cin >> arr[i];
			arr[i]=arr[i]%(k+1);
			if(arr[i]<0)arr[i]+=(k+1);
			if(flag==0)
			{
				arr[i]=arr[i]%(k+1);
				if(mod1==arr[2])
				{
					modv=mod1;	
					cnt=2;
				}
				else if(mod2==arr[2])
				{					
					modv=mod2;
					cnt=2;
				}				
				flag=1;
			}
			else if(arr[i]==modv)
			{
				cnt++;				
			}
			//cout << arr[i] << endl;				
		}	
		
		if(cnt>=n-1)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}		
	}
	
	return 0;
}


