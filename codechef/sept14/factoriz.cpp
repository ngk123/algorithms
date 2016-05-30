#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t,len;
	string str;

	cin >> t;

	while(t--)
	{
		cin >> str;
		len=str.length();
		if(str[len-1]=='0' && len > 1)
		{
			cout << "3" << endl; 
			cout << "2\n5\n" << str.substr(0,len-1) << endl;
		}
		else
		{
			cout << "1" <<endl;
			cout << str << endl;
		}
	}
	return 0;
}
