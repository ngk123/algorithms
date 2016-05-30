#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	int len,i,j,temp,sizes;
	
	cin >> str;
	len=str.length();
	sizes=(1<<len);
	for(j=1;j<sizes;j++)
	{
		string ans="";
		temp=j;
		for(i=0;i<len;i++)
		{
			if(temp%2==1)
			{
				ans=ans+str[i];
			}		
			temp>>=1;
		}
		cout<< ans << endl;
	}
	return 0;
	
}

