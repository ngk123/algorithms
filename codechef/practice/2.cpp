#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T,len,cnt,i;
	string str;
	
	cin >> T;
	while(T--)
	{
		cin >> str;
		cnt=0;
		len=str.length();
		for(i=len-4;i>=0;i--)
		{
			if((str[i+3]=='?'||str[i+3]=='F') && (str[i+2]=='?'||str[i+2]=='E') && (str[i+1]=='?'||str[i+1]=='H') && (str[i]=='?'||str[i]=='C'))
			{
				str[i+3]='F';	str[i+2]='E';str[i+1]='H';str[i]='C';
			}	
		}
		for(i=0;i<len;i++)
		{
			if(str[i]=='?')str[i]='A';
		}
		
		
		cout << str << endl;
		
	}
	return 0;
}
