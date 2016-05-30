#include<stdio.h>
#include<stdlib.h>

int main()
{
  int T,n,flag,j,minIdxN,temp,min,sum,turns,i,H[51],D[51],diff[51],minIdx;
  minIdx=1;
  scanf("%d",&T);
  while(T--)
    {
      int process[51]={0};
      sum=0;
      min=1000;
      scanf("%d",&n);
      for(i=0;i<n;i++)
	{
	  scanf("%d",&H[i]);
	}      
      for(i=0;i<n;i++)
	{
	  scanf("%d",&D[i]);
	  diff[i]=D[i]-H[i];
	  sum+=diff[i];
          if(min>diff[i])
	    {
              min=diff[i];
	      minIdx=i;
	    }
	}      
      

      if(n==1)
	{
	  if(D[0]>H[0])
	    {
	      printf("-1\n");
	    }
	  else
	    {
	      printf("%d\n",H[0]-D[0]);
	    }
	  continue;
	}


      if(n==2)
	{

	  if((diff[0]+diff[1])!=0)
	    {
	      printf("-1\n");
	    }

	  else
	    {
	      if(diff[0]<0)diff[0]=-diff[0];
	      printf("%d\n",diff[0]);
	    }

	  continue;
	}

       
      if(sum%(n-2)==0)
	{
	  turns=sum/(n-2);
	}
      else
	{
	  printf("-1\n");
	  continue;
	}

      for(i=0;i<turns;i++)
	{
          min=1000;
          for(j=0;j<n;j++)
	    {
	      if(j==minIdx)
		{
		  process[j]-=1;
		 
		}
	      else
		{
		  process[j]+=1;
		}

	      temp=diff[j]-process[j];
	      if(temp<min)
		{
		  min=temp;
		  minIdxN=j;
		}
	    }

	  minIdx=minIdxN;
	}
      flag=0;
      // printf("turns:%d\n",turns);
      for(j=0;j<n;j++)
	{
	  if(process[j]!=diff[j])
	    {
	      printf("-1\n");
	      flag=-1;
	      break;
	    }
	}
      if(flag==0)
	{
	  printf("%d\n",turns);
	}


    }
  return 0;
}
