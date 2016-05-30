#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,i,n,a,t2,arr[100005],b,temp1,temp2,pTemp1,pTemp2;
	vector<string> str1,str2;
	string tstr1,tstr2;
	
	cin >>t;
	t2=t;	
	while(t--)
	{
		cin >> tstr1 >> tstr2 ;
		str1.push_back(tstr1);
		str2.push_back(tstr2);
	}
	int flag=0;
	cin >> a;
	pTemp1=1;
	pTemp2=1;
	for(i=1;i<t2;i++)
	{
		cin >> b;
		temp1=-1;
		temp2=-1;
		if(pTemp1==1 && str1[b-1].compare(str1[a-1])>0)
		{
			temp1=1;
		}
		if( pTemp2==1 && str1[b-1].compare(str2[a-1])>0)
		{
			temp1=1;
		}
		
		
		if(pTemp1==1 && str2[b-1].compare(str1[a-1])>0)
		{
			temp2=1;
		}
		
		if( pTemp2==1 && str2[b-1].compare(str2[a-1])>0)
		{
			temp2=1;
		}
		
		if(temp1==-1 && temp2==-1)
		{
			flag=1;
		}
		
		pTemp1=temp1;
		pTemp2=temp2;
		a=b;
	}
	
	
	if(flag==1)cout << "NO\n";
	else
	{
		cout << "YES\n";
	}
	
	return 0;
}
