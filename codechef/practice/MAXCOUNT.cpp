#include<cstdlib>
#include<iostream>
#include<cstdio>

int main()
{
	int T,N,lastNum,num,max,i;
	
	scanf("%d",&T);
	
	while(T--)
	{
		int count[10001]={0};
		scanf("%d",&N);
		
		max=1;
		scanf("%d",&num);
		count[num]++;
		lastNum=num;
		for(i=1;i<N;i++)
		{
		    scanf("%d",&num);
			count[num]++;
			if(count[num]>max || (count[num]==max && num<lastNum)){  max=count[num];lastNum=num;  }
		}
		printf("%d %d\n",lastNum,max);
		
	}

}
