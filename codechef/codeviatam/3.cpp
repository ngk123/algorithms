#include<bits/stdc++.h>
using namespace std;

int main()
{
	int k,n,a;
	set<int> s;
	cin >> k;
	while(k--)
	{
		cin >> n;
		//cout << "Hiiiii\n";
	//	cout << n ;
		while(n--)
		{			
			cin >> a;
			s.insert(a);
		}
		
		cout << s.size() << endl;
		s.clear();	
	}
	return 0;	
}