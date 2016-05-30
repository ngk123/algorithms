#include<cstdlib>
#include<cstdio>
#include<iostream>

using namespace std;


int main()
{
	int T,N,M,count,ans,k,j,i,maxNum,max,flag,a;
	cin >> T;	
	while(T--)
	{
		int table[402]={0};
		int customer[403];
		count=0;
		ans=0;
		cin >> N >> M;
		
		for(i=0;i<M;i++)
		{
			cin>>customer[i];		
		}
		
		for(i=0;i<M;i++)
		{
			a=customer[i];		
			if(table[a]==0 && count < N)
			{
				ans++;
				table[a]=1;
				count++;
			}
			else if(table[a]==0 && count == N)
			{
				ans++;
				int next[401]={0};
				for(j=(M-1);j>i;j--)
				{
					next[customer[j]]=j;
				}		
				flag=0;
				for(k=0;k<401;k++)
				{
					if(table[k]==1 && next[k]==0)
					{
							table[k]=0;
							flag=1;
							break;
					}				
				}			
				max=-1;
				
				if(flag==0)
				{
					for(k=0;k<401;k++)
					{
						if(table[k]==1 && next[k]>max)
						{
								max=next[k];
								maxNum=k;
														
						}				
					}
					table[maxNum]=0;
				
				}
				table[a]=1;
							
			}
			
		}
		cout << ans << endl;
		
	}
	return 0;
}

