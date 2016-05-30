#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T,b,ls;
	float minr,maxr;
	cin >> T;
	
	while(T--)
	{
		cin >> b >> ls;
		
		minr=sqrt(ls*ls-b*b);
		maxr=sqrt(b*b+ls*ls);
		cout << minr << " " << maxr << endl;
	}
	return 0;
}
