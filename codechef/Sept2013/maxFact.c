#include<stdio.h>
#include<stdlib.h>

int main()
{
  long long int a[66],i,temp;
  a[0]=1;a[1]=2;
  for(i=2;i<66;i++)
    {
      temp=(i+1)/2;
      if(i%2==0)
	{
	  temp=temp+1;
	  a[i]=(a[i-1]/temp)*(i+1);
      
	}
      //a[i]=a[i-1]*(i+1);
      

      else
	{

 a[i]=(a[i-1])*2;

	}
      

     
      //  a[i]=a[i]*(i+1);
      
      //  a[i]=a[i]/temp;
      printf("%lld,\t",a[i]);

    }

  


  return 0;



}