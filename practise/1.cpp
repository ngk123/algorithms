#include<iostream>
#include<string>

using namespace std;

int main()
{
	
	string str;
	int len,i,max,cnt;
	
	cin >> str;
	len=str.length();
	
	max=-1;
	cnt=0;
	for(i=0;i<len;i++)
	{
		if(str[i]=='a')
		{
			cnt++;
		}
		else 
		{
			if(cnt>max)max=cnt;
			cnt=0;
		}		
		
	}
	
	if(cnt>max)max=cnt;
	for(i=0;i<=max;i++)
	{
		cout << 'a' ;
	}
	
	cout << endl;
	return 0;
}
