#include<stdio.h>
#include<stdlib.h>


int main()
{

int T,i;
long long int N, K;
long long int div, rem;

  scanf("%d",&T);


	for(i=0;i<T;i++)
	{
          scanf("%llu%llu",&N,&K);
  if(K==0)
{

div=0;
rem=N;
}
else
{      
     div =N/K;
          rem = N%K;
}
         
          printf("%llu %llu\n",div,rem);

	} 


   return 0;
}
