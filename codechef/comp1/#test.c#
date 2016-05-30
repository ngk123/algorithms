#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  int T,i,j,t,a[3],idx,max,sum;


  scanf("%d",&T);
  while(T--)
    {
     
      scanf("%d%d%d",&a[0],&a[1],&a[2]);
      max=a[0];
      idx=0;
      if(a[1]>max)
	{
	  max=a[1];
	  idx=1;
	}

      if(a[2]>max)
	{
	  max=a[2];
	  idx=2;
	}
      


      if(max>(a[(idx+1)%3]+(a[(idx+2)%3])))
	{
	  printf("Alice\n");
	}

      else
	{
	  sum=a[0]+a[1]+a[2];
	  if(sum%2==0)
	    {
	      printf("Bob\n");

	    }
	  else
	    {
	      printf("Alice\n");
	    }
	}
      /*
      t=1;
      while(1)
	{
	  if(a[(idx+1)%3]==0 && a[(idx+2)%3]==0)
	    {

	      if(t%2==1)
		{
		  printf("Alice\n");
		  break;
		}
	      else
		{
		  printf("Bob\n");
		  break;
		}
	    }


	  max=a[(idx+1)%3];
	  idx=(idx+1)%3;
	  if(a[(idx+2)%3]>max)
	    {
	      max=a[(idx+2)%3];
	      idx=(idx+2)%3;
	    }
	  
	  a[idx]--;
	  t++;
	  
	}
      */

    }
  return 0;
}



