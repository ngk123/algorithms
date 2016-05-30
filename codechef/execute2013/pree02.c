#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  int T,N,count,temp,first,sec,dig,i;
  scanf("%d",&T);

  while(T--)
    {

      scanf("%d",&N);
      count=0;
      temp=sqrt(N);
      for(i=1;i<=temp;i++)
	{

	  if(N%i==0)
	    {
	      first=i;
	      sec=N/i;
	      while(first>0)
		{
		  dig=first%10;
		  first=first/10;
		  if(dig==3 || dig==5 || dig==6)
		    {
		      count++;
		      break;
		    }
		}


	      if(i!=sec)
		{
		  while(sec>0)
		    {
		      dig=sec%10;
		      sec=sec/10;
		      if(dig==3 || dig==5 || dig==6)
			{
			  count++;
			  break;
			}
		    }
		}
	      
	    }
	  
	}

      printf("%d\n",count);
      
    }



  return 0;
}
