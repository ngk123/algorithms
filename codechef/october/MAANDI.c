#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  int T,n,count,dig,temp,check1,check2,i,loop;
  char buffer[11];
  scanf("%d",&T);
  //printf("Hello\n,");	
  while(T--)
    {
      scanf("%d",&n);	
       
      count=0;
      loop=sqrt(n);
      for(i=1;i<=loop;i++)
	{
	  
	  if(n%i==0)
	    {
	     
	      check1=0;
	      temp=i;
	      while(temp>0)
		{
		  dig=temp%10;
		  temp=temp/10;
		  if(dig==4 || dig==7)
		    {
		      check1=1;			
		      break;
		    }
		  
		}
	      if(check1==1){count++;}
	      
	      check2=0;
	      temp=n/i;
              if(temp!=i)
		{
		  
		  while(temp>0)
		    {
		      dig=temp%10;
		      temp=temp/10;
		      if(dig==4 || dig==7)
			{
			  check2=1;			
			  break;
			}
		      
		    }
		  if(check2==1){count++;}
		}
	      
	    }
	  
	}
      /* temp=n;
      while(temp>0)
	{
	  dig=temp%10;
	  temp=temp/10;
	  if(dig==4 || dig==7)
	    {
	      count++;			
	      break;
	    }
	  
	}*/
      
      printf("%d\n",count);
      
      
    }
  return 0;
}
