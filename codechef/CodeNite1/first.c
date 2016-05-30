#include<stdio.h>
#include<stdlib.h>

int main()
{
  int T, N;

  scanf("%d",&T);

  while(T--)
    {
      scanf("%d",&N);
      if(N%49==0 && N%343!=0)printf("YES\n");
      else printf("NO\n");


    }




  return 0;
}
