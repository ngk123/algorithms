#include<bits/stdc++.h>
using namespace std;


string dtostring(float a)
{
	string str="";
	char c;
	int temp,dig;
	float dec,tempf;
	temp=a;
	dec=a-temp;
	while(temp>0)
	{
		dig=temp%10;
		c=dig+'0';
		str=c+str;
		temp=temp/10;
	}
	str=str+'.';
	while(dec>0)
	{
		cout << dec << endl;
		tempf=dec*(10);
		cout << "after multiplication with 10 : "<<tempf << endl;
		dig=tempf;	
		cout << "digit : " <<  dig << endl;	
		dec=tempf-(float)dig;
		c=dig+'0';
		str=str+c;
	//	break;
	}
	
	return str;
}

int main()
{
	int t;
	float a;
	string str;
	cin >> t;
	while(t--)
	{
		cin >> a;
		str=dtostring(a);
		cout << str << endl;
	}
	return 0;
}
