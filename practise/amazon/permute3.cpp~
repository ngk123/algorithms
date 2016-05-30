#include<bits/stdc++.h>
using namespace std;

int n;
int arr[200];
void swapc(char* a,char* b)
{
	char temp;
	temp=*a;
	*a=*b;
	*b=temp;
	return ;
}

void permute(char* str,int l)
{
	int i;
	if(l==n)
	{
		cout << str << endl;
	}
	else
	{
		int j=0;
		for(i=l;i<n;i++)
		{
			arr[j++]=str[i];
		}
		sort(arr,arr+n-l);
		j=0;
		for(i=l;i<n;i++)
		{
			str[i]=arr[j++];
		}
			
		for(i=l;i<n;i++)
		{
			if(i==l)
			{
				permute(str,l+1);			
			}
			else if(str[l]!=str[i])
			{
				swapc(str+l,str+i);
				permute(str,l+1);
				swapc(str+l,str+i);
			}
		}	
	}
	return ;
}


int main()
{
	char str[200];
	
	cin >> str;
	n=strlen(str);
	//cout << str << endl;
	
	permute(str,0);		
	return 0;
}



