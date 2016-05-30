#include<stdio.h>
#include<stdlib.h>

int main()
{
  int T,count,d1,d2,d3;
  int x1,x2,x3,y1,y2,y3;

  scanf("%d",&T);
  count=0;
  while(T--)
    {
      scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);

      d1=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
      d2=(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
      d3=(x3-x2)*(x3-x2)+(y3-y2)*(y3-y2);
      if(d1==(d2+d3) || d2==(d1+d3) || d3==(d1+d2))count++;   
    }
  

    
  printf("%d\n",count);


  return 0;

}
