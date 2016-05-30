#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=0,j=0,si,sj,ei,ej,k,m,n,l;
	int pr[12][12],temp[12][12];
	cin >> si >> sj;
	cin >> ei >> ej;
	cin >> k;
	memset(pr,0,sizeof(pr));
	memset(temp,0,sizeof(pr));
	pr[si+2][sj+2]=1;
	for(l=0;l<k;l++)
	{
		for(i=2;i<10;i++)
		{
			for(j=2;j<10;j++)
			{
				if(pr[i][j]>0)
				{
					for(m=-1;m<=1;m++)
					{
						for(n=-1;n<=1;n++)
						{
							if(!(m==0 && n==0))
							{
								temp[i+m][j+n]+=pr[i][j];
							}
						}
					}								
					temp[i-2][j-1]+=pr[i][j];	
					temp[i-2][j+1]+=pr[i][j];	
					temp[i+2][j-1]+=pr[i][j];	
					temp[i+2][j+1]+=pr[i][j];	
										
					temp[i-1][j-2]+=pr[i][j];
					temp[i-1][j+2]+=pr[i][j];
					temp[i+1][j-2]+=pr[i][j];
					temp[i+1][j+2]+=pr[i][j];				
				}		
					
			}
		}
		for(i=0;i<12;i++)
		{
			for(j=0;j<12;j++)
			{
				pr[i][j]=temp[i][j];
				temp[i][j]=0;		
			}
		}			
	}
	
	cout << pr[ei+2][ej+2] << endl;
	return 0;
}
