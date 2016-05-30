#include<stdio.h>
#include<stdlib.h>

int main()
{
  int n,check,a[100000],i,j,temp;
  scanf("%d",&n);
  check=0;
  scanf("%d",&a[0]);
  temp=a[0];
  for(i=1;i<n;i++)
    {
      scanf("%d",&a[i]);
      if(a[i]!=temp && check==0)check=1;
     
    }

  if(check==0)printf("1\n1 1\n");
  else
    {
  printf("%d\n",n);
  for(j=n;j>=1;j--)
  printf("%d %d\n",j,j);

    }
  return 0;

}
