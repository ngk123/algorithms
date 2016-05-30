#include<stdio.h>
#include<stdlib.h>

typedef struct dodo
{
  int a;
  int b;
 }dodo;

int cmpfunc (const void * e, const void * f)
{
  return ((*(dodo*)e).b - (*(dodo*)f).b);
}

int main()
{
  int i;
  dodo one[10];
  for(i=0;i<5;i++)
    {
      scanf("%d%d",&one[i].a,&one[i].b);
    }
   qsort(one,5,sizeof(dodo),cmpfunc);
   for(i=0;i<5;i++)
     {
       printf("%d\n",one[i].b);
     }
   return 0;
}
