#include<bits/stdc++.h>
using namespace std;
int val[101][50];

int calVal()
{	
	int i,j,n;
	val[0][0]=1;
	val[1][0]=1;	
	for(i=1;i<100;i++)
	{
		//cout << "i " <<i << endl;
		val[i][0]=1;
		for(j=1;j<50;j++)
		{			
			if(j==i)
			{
				val[i][j]=1;
				break;
			}			
			val[i][j]=(val[i][j-1]*(i-j+1))/j;
		}	
	}	
	return 0;
}

int main()
{
	int i,j,T,c,r,g,flag,pr,cnt;
	calVal();
	
	
	
	for(i=0;i<8 ;i++)
	{
		for(j=0;j<10;j++)
		{
			cout << val[i][j] << " ";
		}
		cout << endl;
	}
	
	
		
	cin>>T;
	
	while(T--)
	{
		flag=0;
		int arr[50]={0};
		cnt=0;
		cin >> r >> c >> g;
		
		for(i=0;i<100;i++)
		{
			if(val[i][c]==g)
			{
				arr[cnt++]=val[i][c];
				g=g-val[i][c];
				pr=i;
				if(g==0) flag=1;
				break;				
			}
			else if(val[i][c]>g)
			{
				arr[cnt++]=val[i-1][c];
				g=g-val[i-1][c];
				pr=i-1;
				if(g==0) flag=1;
				break;
			}
			
		}
		//cout << "g : " << g << endl; 
		if(flag==0)
		{
			for(j=c-1;j>=0;j--)
			{
				cout << "pr : " << pr << endl;
				cout << "g : " << g << endl; 
				for(i=pr;i>=0;i--)
				{
				
					if(val[i][j]==g)
					{
						arr[cnt++]=val[i][j];
						g=g-val[i][j];
						pr=i;
						if(g==0) flag=1;
						break;				
					}
					else if(val[i][j]>g)
					{
						arr[cnt++]=val[i-1][j];
						g=g-val[i-1][j];
						pr=i-1;
						if(g==0) flag=1;
						break;
					}			
				
				}	
				if(flag==1)break;	
			}	
		}
		
		cout << cnt << endl;
		
		for(i=0;i<cnt;i++)
		cout << arr[i] << " ";
		cout << endl;
		
	}
	
		


	return 0;
}
