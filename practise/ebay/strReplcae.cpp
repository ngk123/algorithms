#include<bits/stdc++.h>
using namespace std;

int main()
{	
	string str1,str2,str3;
	int len1,len2;
	cin >> str1 >> str2 >> str3;
	len1=str1.length();
	len2=str2.length();
	int found=0;
	while(1)
	{
		if(found<len1)	
		{	
			found=str1.find(str2,found);
		}
		
		if(found!=string::npos)
		{
			str1.replace(found,len2,str3);
			found=found+str3.length()-1;
		}		
		else
		{
			break;
		}
	}
	
	cout << str1 << endl;
	return 0;	
}

