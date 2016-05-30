#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,ans,cnt,cc;
	cin >> t;
	
	while(t--)
	{
		cin >> n;
		ans=1;
		if(n==1) { cout <<  0 << endl; continue;}
		
		cnt=1;
		cc=2;
		if(cc>=n)
		{
				cout << cnt << endl;
				continue;
		}
		while(1)
		{
			
			cc=cc+(cnt+1);
			if(cc>=n)
			{
				cout << cnt+1 << endl;
				break;
			}		
			cnt++;	
		}
		
				
		
	}
return 0;

}

