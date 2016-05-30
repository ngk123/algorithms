#include<stdio.h>
#include<stdlib.h>


int read()
{
  int d=0,temp;
  char c=getchar_unlocked();

  while(c=='\n' || c==' ' || c=='\t')
    c=getchar_unlocked();
  
  d=(int)c-'0';
  c=getchar_unlocked();
  while(c!=' ' && c!='\n' && c!='\t')
    {
      temp=(int)c-'0';
      d=d*10+temp; 
      c=getchar_unlocked(); 
    }
  return d;
}


int cmpfunc(const void * e, const void * f)
{
	return (*(int*)f) - (*(int*)e); 
}

int main()
{
int i;

int a[10];

	for(i=0;i<10;i++)
	{
		a[i]=10-i;
	}
qsort(a,10,sizeof(int),cmpfunc);

	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}

return 0;

}
