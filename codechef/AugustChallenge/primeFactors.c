#include<stdio.h>
#include<stdlib.h>

int main()
{

  int primeFactors[100][25],i,temp,j,count;
  int a[][2]={
               {1,2},
	      {2,3}
};
  int primes[25]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};


  for(i=2;i<=100;i++)
    {
      printf("{");
      for(j=0;j<=24;j++)
	{
          count=0;
          temp=i;
      
	 while(temp%primes[j]==0)
	    {
              temp=temp/primes[j];
              count+=1;
	    }
	 // printf("%3d ",count);
         if(j!=24)printf(",");   

	}
      printf("},\n");
    }



  return 0;
}
