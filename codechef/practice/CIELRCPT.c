#include<stdio.h>
#include<stdlib.h>

int main()
{
  int T,p,count,temp,div;

  scanf("%d",&T);
  while(T--)
    {
      scanf("%d",&p);
      count=0;
      temp=2048;
      while(p!=0)
	{
          div=(p/temp);
	  count+=div;
          p=p-(temp*div);
          temp=temp/2;
	} 

      printf("%d\n",count);
    }




  return 0;
}
