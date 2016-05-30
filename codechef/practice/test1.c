#include<stdio.h>
#include<stdlib.h>

int main()
{
int T,temp[4][4],m,four[4],four2[4],count,ans,a,b,k,i,j;

scanf("%d",&T);

for(m=0;m<T;m++)
{
	scanf("%d",&a);
    k=0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&temp[i][j]);	
			if(i+1==a){four[k]=temp[i][j];k++;}	
		}
	}
	
	scanf("%d",&b);
    k=0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&temp[i][j]);	
			if(i+1==b){four2[k]=temp[i][j];k++;}	
		}
	}

	count=0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(four[i]==four2[j]){count++; ans=four[i];break;}
		
		}
	
	}
	
	
	if(count==1)
	{
		printf("Case #%d: %d\n",m+1,ans);
	}
	else if(count >0 )
	{
		printf("Case #%d: Bad magician!\n",m+1);
	}
	else if(count ==0 )
	{
		printf("Case #%d: Volunteer cheated!\n",m+1);
	}

}


}
