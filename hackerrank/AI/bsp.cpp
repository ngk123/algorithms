#include<bits/stdc++.h>
using namespace std;


int main()
{
	vector<string> vs;
	string str;
	int n,mx,my,px,py,i,j,diffx,diffy;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> str;
		for(j=0;j<str.length();j++)
		{
			if(str[j]=='m')
			{
				mx=j;
				my=i;
			}
			
			if(str[j]=='p')
			{
				px=j;
				py=i;
			}
		}
			
	}
	
	
	diffy=py-my;
	diffx=px-mx;
	if(diffy>=0)
	{
		for(i=0;i<diffy;i++)
		{
			cout << "DOWN\n";
		}
	}
	else
	{
		for(i=0;i<(-diffy);i++)
		{
			cout << "UP\n";
		}		
	}
		
	if(diffx>=0)
	{
		for(i=0;i<diffx;i++)
		{
			cout << "RIGHT\n";
		}			
	}
	else
	{
		for(i=0;i<(-diffx);i++)
		{
			cout << "LEFT\n";
		}
	}
	return 0;
}


