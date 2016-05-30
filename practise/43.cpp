#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s,cs,num,temp,maxDig;
	cs=2;
	s=2;
	maxDig=1;
	cin >> n;
	while(1)
	{
		if(cs>=n)
		{
			break;
		}			
		else
		{
			s*=2;
			cs+=s;
			maxDig+=1;
		}	
	}
	num=0;
	temp=n-(cs-s);
	while(1)
	{	
		if(temp>s/2) 
		{
			num=num*10+4;
			temp=temp-s/2;
		}
		else
		{
			num=num*10+3;
		}
		s/=2;			
		
		if(s==1)break;
	}
	cout << num << endl;
	return 0;
}
