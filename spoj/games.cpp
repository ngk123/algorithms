#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
using namespace std;

int gcd(int a, int b)
{
	int l,m,temp;
	if(a>b){l=a;m=b;}
	else { l=b;m=a;} 
	if(m==0)return l;
	while(m!=0)
	{
		temp=m;
		m=l%m;
		l=temp;	
	}
	return l;
}



int main()
{
	int T,len,flag,count,numr,den,temp,i,ans;
	char avg[15];
	
	cin >> T;
	while(T--)
	{
		cin >> avg;
//		cout << avg << endl;
		len=strlen(avg);
		flag=0;
		count=0;
		for(i=len-1;i>=0;i--)
		{	
			if(avg[i]=='.')
			{
				flag=1;
				break;
			}
			else
			{
				count++;			
			}
		
		}	
		den=1;
		for(i=0;i<count;i++)
		{
			den*=10;
		}
		
		numr=0;
		if(flag==1)
		{		
		
			for(i=0;i<len;i++)
			{
				if(avg[i]!='.')
				{
					temp=(int)avg[i]-48;
					numr=numr*10+temp;
				}			
			}
			
			ans=den/gcd(numr,den);	
			cout << ans << endl;
		}
		else
		{
			cout << 1 <<endl;
		
		}
		
	}
	
	return 0;
}
