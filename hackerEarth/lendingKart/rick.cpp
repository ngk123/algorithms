#include<cstdlib>
#include<cstdio>
#include<iostream>


int main()
{
	int T,n,a,i,count,flag,temp;
	scanf("%d",&T);
	
	
	while(T--)
	{
		int cnt[50004]={0};
		count=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a);
			cnt[a]++;		
		}
		flag=1;
		for(i=0;i<=50000; )
		{
			if(cnt[i]!=0)
			{
				temp=i-(count/6)-count;
				if(temp>0)
					count++;
				else
				{
					flag=0;
					break;	
				}
				
				cnt[i]--;
				if(cnt[i]==0)i++;		
					
			}	
			else
			{
				i++;			
			}			
		}
		
		if(flag==0)
		{
			printf("Goodbye Rick\n%d\n",count);
		}
		else
		{
			printf("Rick now go and save Carl and Judas\n");
		}
		
	}
	return 0;
}
