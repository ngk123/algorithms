#include<stdio.h>

#include<stdlib.h>


void combination(int level);
int T, n , A[50],B[50],P[50],i,j,flag[50];

double final;

double ans=0;

int main()
{
   

  scanf("%d",&T);

  for(i=0;i<T;i++)
    {
      scanf("%d",&n);

      for(j=0;j<n;j++)
	{

	  scanf("%d%d%d",&P[j],&A[j],&B[j]);
          

	}
      
      final=0;

      if(n>16)printf("%lf\n",ans);

      else
	{ 
	  
	  combination(0);

          printf("%lf\n",final);


	}

    }

  


  return 0;
}


void combination(int level)
{

   
  if(level==n)
    {
      
      // check whether all positions have different values or not 
      
      int temp[16]={0},k;
      double prob; 
   


      for(k=0;k<n;k++)
	{

	  if(flag[k]==0)
	    {

	      temp[A[k]-1]++;

	    }
          else
	    {

	      temp[B[k]-1]++;

	    }
   	}
      for(k=0;k<16;k++)
	{
	  if(temp[k]>1)return;

	}
      prob=1;
      for(k=0;k<n;k++)
	{
	  if(flag[k]==0)
	    {
	      
	      prob=(prob*P[k])/100;
	      
	    }
          else
	    {
	      
	      prob=prob*(100-P[k])/100;

	    }

	}
      final+=prob;

      return;
      
    }
  



  flag[level]=0;  
  combination(level+1);
  
  flag[level]=1;
  combination(level+1);
    
  





  
}
