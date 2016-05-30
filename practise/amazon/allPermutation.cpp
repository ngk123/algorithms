#include<bits/stdc++.h>
using namespace std;

int main()
{
	int len,i,arr[200];
	set<string> a;
	string str;
	cin >> str;
	len=str.length();
	for(i=0;i<len;i++)
	{
		arr[i]=str[i];		
	}
	
	sort(arr,arr+len);
	for(i=0;i<len;i++)
	{
		str[i]=arr[i];
	}
	do{
		string st="";
		for(i=0;i<len;i++)
		{
			st=st+(char)arr[i];
		}
		cout << st << endl;
		a.insert(st);
	}while(next_permutation(arr,arr+len));
	
	
	
	return 0;
}
