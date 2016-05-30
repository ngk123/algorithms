#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int N,len,ans,i,j;
	int count1[30]={0};
	
	char str[102];	
	scanf("%d",&N);
	scanf("%s",str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		count1[(int)str[i]-97]=1;
	}
	
	for(j=0;j<N-1;j++)
	{
		scanf("%s",str);
		len=strlen(str);
		int count2[30]={0};
		for(i=0;i<len;i++)
		{
			count2[(int)str[i]-97]=1;
		}
		
		for(i=0;i<30;i++)
		{
			count1[i]=count1[i]&count2[i];
		}
		
	}
	
	ans=0;
	for(i=0;i<30;i++)
		{
			if(count1[i]){ans++; }
		}
	printf("%d\n",ans);	
	return 0;
}
