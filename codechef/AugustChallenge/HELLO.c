#include<stdio.h>
#include<stdlib.h>

int main()
{
  int T,U,N,M,C,i,j,bestPlan;
  float D,R,cost,tempCost;


  scanf("%d",&T);

  for(i=0;i<T;i++)
    {
      scanf("%f%d%d",&D,&U,&N);
      cost=D*U;
      bestPlan=0;
      for(j=0;j<N;j++)
	{
	  scanf("%d%f%d",&M,&R,&C);
          tempCost=((float)C/M)+(R*U);
	  //printf("tempCost=%f\n",tempCost);
          if(tempCost<cost)
	    {
	    bestPlan=j+1;
	    cost=tempCost;
	    }
	}

      printf("%d\n",bestPlan);

    }
  

  return 0;
}
