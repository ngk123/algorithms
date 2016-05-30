#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
	lli n,m,q;
	lli sq,mid;
	cin >> n >> m;
	mid=(2*n)+1;
	while(m--)
	{
		cin >> q;
		if(q==mid)cout << n <<endl;
		else if(q<(n+2)) cout << "0\n";
		else if(q>(3*n)) cout << "0\n";
		else if(q<mid)
		{
			cout << q-n-1 << endl;
		}	
		else if(q>mid)
		{
			cout << 3*n-q+1 << endl;
		}		
	}

	return 0;
}

