#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,i,len;
	string str;
	cin >> t;
	getchar();
	while(t--)
	{
		
		getline(cin,str);
		
		len=str.length();
		for(i=0;i<len;i++)
		{
			if(str[i]> 57 || str[i]<48)cout << str[i];	
		}
		cout << endl;

	}
	return 0;
}
