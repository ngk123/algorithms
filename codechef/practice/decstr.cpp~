#include<iostream>
#include<cstring>


using namespace std;
int main()
{	
	int T,K,t,i,j,temp,div,count;
	char str[]="zyxwvutsrqponmlkjihgfedcba";
	char ans[110];
	cin >> T;
	for(t=0;t<T;t++)
	{
		count=0;
		cin>>K;
		temp=K%25;
		div=K/25;
		for(i=temp;i>=0;i--)
		{
			ans[count]=(char)(97+i);
			count++;		
		}
		for(i=0;i<div;i++)
		{
			for(j=25;j>=0;j--)
			{
				ans[count]=(char)(97+j);
				count++;
			}	
		}
		ans[count]='\0';
		cout << ans << endl;
			
	}



}
