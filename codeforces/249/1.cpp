#include<bits/stdc++.h>

using namespace std;


int sign[2001][2001]={0};

int main()
{
	int t,arr[1001],k,l,pX,cX,pY,cY,maxY,i,j,start,end,minY;
	int d=92;
	cin >>t;
	pX=0;
	pY=0;
	maxY=pY;
	minY=pY;
	for(i=0;i<t;i++)
	{
		cin>>arr[i];	
		cX=pX+arr[i];
		if(i%2==0)cY=pY+arr[i];
		else cY=pY-arr[i];
		
		
		
			
		if(i%2==0)	
		{
			for(k=pX,l=pY;k<cX;k++,l++)
			{
				sign[l+1000][k+1000]=1;
			}
		
		}
		else
		{
			for(k=pX,l=pY-1;k<cX;k++,l--)
			{
				sign[l+1000][k+1000]=2;
			}
		
		}
		
		
		pX=cX;
		pY=cY;
		if(maxY<pY)
		{
			maxY=pY;
		}
		if(minY>pY)
		{
			minY=pY;
		}
				
	}
	for(j=maxY-1;j>=minY;j--)
	{
		int cnt=0;
		for(i=0;i<cX;i++)
		{
			if(sign[j+1000][i+1000]==1)
			{
				cout << "/";
				
			}
				
			else if(sign[j+1000][i+1000]==2)
			{
				cout << char(d);
			}	
			else
			{
				cout << " ";
			
			}
			
		}	
		cout << endl;		
	}		
	
	

	return 0;
}

