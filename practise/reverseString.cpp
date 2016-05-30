#include<bits/stdc++.h>
using namespace std;

// wrong

int main()
{
	string str,rstr;	
	cin >> str;
	rstr=reverse(begin(str),end(str));
	cout << rstr;

	return 0;
}
