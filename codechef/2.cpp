#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int i,max,cnt,len;
	char ansC,tempC;
	string str;
	max=1;
	cin >> str;
	len=str.length();
	i=0;
	tempC=str[i];
	ansC=str[i];
	cnt=1;
	for(i=1;i<len;i++)
	{
		if(tempC==str[i])
		{
			 cnt++;
			 if(cnt>max || (cnt==max && (int)ansC>=(int)tempC))
			 {
			 	ansC=tempC;
			 	max=cnt;			 
			 }
		}
		else
		 {
		 	 tempC=str[i];
		 	  cnt=1;
		 }	
	}
	cout << ansC <<"\n" << max << endl;
	return 0;
}
