#include<stdio.h>
#include<stdlib.h>

int main()
{
  int T,i,temp, j,d,sum,k;
  int L,U,count;
  int a[11]={2,3,5,7,11,13,17,19,23,29,31};
  scanf("%d",&T);
  for(i=0;i<T;i++)
    {

      scanf("%d%d",&L,&U);
      count=0;
      for(j=L;j<=U;j++)
	{
          temp=j;
	  sum=0;
	  while(temp>0)
	    {
	      d=temp%10;
	      sum+=d;
	      temp=temp/10;
            
	    }
           	  
	  for(k=0;k<12;k++)
	    {

	      if(sum==a[k])count++;

	    }
	} 
      printf("%d\n",count);
      
    }

  



  return 0;
}
