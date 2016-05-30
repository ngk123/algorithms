#include<iostream>
#include<vector>

using namespace std;
int main()
{
	int m,len,i,j,k,n,t;
	string str;	
	cin >> m;
		
	for(t=0;t<m;t++)
	{
		int edge[50][50]={0};
		int count[50]={0};
		cin >> str;
		//cout << str << endl;
		len=str.length();
		for(i=0;i<len;i++)
		{
			if(str[i]=='N')edge[0][i]=0;
			else edge[0][i]=1;
			
		}
		for(i=1;i<len;i++)
		{
			cin >> str;
			//cout << str << endl;
			for(j=0;j<len;j++)
			{
				if(str[j]=='N')edge[i][j]=0;
				else edge[i][j]=1;
			}			
		}
		
		n=len;
		for(i=0;i<n;i++)
		{
			for(j=i;j<n;j++)
			{
				if(i!=j && edge[i][j]==0)
				{
					for(k=0;k<n;k++)
					{
						if(k!=i && k!=j && edge[i][k]==1 && edge[k][j]==1)
						{
							count[i]++;
							count[j]++;
							break;
						}
						
					}			
				}
		
		
			}
		}
		int idx,max=-1;
	
		for(i=0;i<n;i++)
		{
			if(count[i]>max)
			{
				max=count[i];
				idx=i;
			}
		}
		
		cout << idx << " "<< max << endl;
					
	}
	
	
return 0;	

}
