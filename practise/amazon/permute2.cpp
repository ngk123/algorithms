#include<bits/stdc++.h>
using namespace std;

string str;
int arr[200];
void permute(string str, int l,int r)
{
	int len,i,j;char temp;
	cout << l << " "<< r <<endl;
	if(l==r)
	{
		cout << str << endl;
	}
	len=r-l+1;	
	j=0;
	for(i=l;i<=r;i++)
	{
		arr[j++]=str[i];
	}	
	sort(arr,arr+len);
	j=0;
	for(i=l;i<=r;i++)
	{
		str[i]=arr[j++];
	}
	//cout << "Heyyyyyyyyyyy\n";
	temp=str[l];	
	//cout << temp << endl;
	for(j=l;j<=r;j++)
	{
		if(j==l)
		{
			permute(str,l+1,r);
		}
		else if(str[l]!=str[j])
		{
			str[l]=str[j];
			str[j]=temp;
		
		    permute(str,l+1,r);
		
			str[j]=str[l];
			str[l]=temp;		
		}
	}
	return;
}


int main()
{
	string str2;
	int len,i;
	str2="";
	cin >> str;
	len=str.length();
	permute(str,0,len-1);
	return 0;
}
