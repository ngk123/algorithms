#include<stdio.h>
#include<stdlib.h>

int main()
{
  int N,ax,ay,bx,by,cx,cy,lowest,highest,min,max,temp,i;
  lowest=1;
  highest=1;
  scanf("%d",&N);
  scanf("%d%d%d%d%d%d",&ax,&ay,&bx,&by,&cx,&cy);
  max=ax*(by-cy)+bx*(cy-ay)+cx*(ay-by);
   
  if(max<=0)max=-max;
  min=max;
 
  
  for(i=2;i<=N;i++)
    {
      scanf("%d%d%d%d%d%d",&ax,&ay,&bx,&by,&cx,&cy);
      temp=ax*(by-cy)+bx*(cy-ay)+cx*(ay-by);
      if(temp<0)temp=-temp;    

  

      if(temp>=max)
	{

	  max=temp;

	  highest=i;

	}
      if(temp<=min)
	{
	  min=temp;
	  lowest=i;
	}

    }
 
  printf("%d %d\n",lowest,highest);


  return 0;
}
