#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,p[100002],c[100000],a,b,k,i,j,min1,min2,len1,len2;	
	string str1,str2;
	cin >> t;
	while(t--)
	{
		cin >> str2 >> str1;
		cin >> a >> b >> k;
		len1=str1.length();
		len2=str2.length();
		p[0]=0;
		for(i=1;i<=len1;i++)
		{
			p[i]=p[i-1]+a;
		}
		
		for(j=1;j<=len2;j++)
		{
			c[0]=p[0]+a;
			for(i=1;i<=len1;i++)
			{		
				if(str1[i-1]==str2[j-1])
				{
					min1=p[i-1];
				}
				else
				{
					min1=p[i-1]+b;
				}				
				min2=min(c[i-1]+a,p[i]+a);
				min1=min(min1,min2);				
				c[i]=min1;						
			}
			
			for(i=0;i<=len1;i++)
			p[i]=c[i];	
			
		}
		if(c[len1]<=k)
		{
			cout << c[len1] << endl;
		}
		else
		{
			cout << "-1\n";
		}	
	}
	return 0;
}

