#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t,n,p,a,cnt;
	
	cin >> t;
	
	while(t--)
	{
		cin >> n >> p;
		cnt=0;
		while(n--)
		{
			cin >>a;
			if(a>=p)
			cnt++;
		}
		cout << cnt << endl;
	
	}

	return 0;
}
