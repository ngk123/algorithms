/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
  int N,a[3000];
  
  scanf("%d",&N);
  scanf("%d",&a[0]);      scanf("%d",&a[1]); scanf("%d",&a[3]);
  diff1=a[1]-a[0];
  diff2=a[2]-a[1];
  flag=0;

  if(N==3)
    {
      if(diff1==diff2)ans=a[2]+diff1;
      if(diff2>diff1)ans=a[1]+diff1;
      else ans=a[0]+diff2;

      printf("%d\n",ans);
      return 0;
    }
  
  if(diff1==diff2)flag=1;

  for(i=3;i<N;i++)
    {
      scanf("%d",&a[i]);
      diff=a[i]-a[i-1];
      
      if(flag==0 && diff!=diff1)
	{
	  ans=a[i-1]+diff1;
	}
      if(diff)

    }
 


  return 0;
}
*/

#include<stdlib.h>
#include <stdio.h>
int main() {
    unsigned int N,i;
    N = 0;
    int *M;
    scanf("%u",&N);
    M = (int*)malloc(sizeof(int)*N);
    for(i = 0; i<N; i++)
    {
        scanf("%d",&M[i]);
    }
    int diff1 = 0, diff2 = 0, diff3 = 0;
    diff1 = M[1] - M[0];
    diff2 = M[2] - M[1];
   
    int cd = 0;
    if (diff1 > diff2)
        cd = diff2;
    else
        cd = diff1;
    
    for(i = 0;i<N-1;i++)
    {
        if(M[i+1] - M[i] == cd)
            continue;
        else if(M[i+1] - M[i] == cd*2)
        {
            printf("%d\n",M[i]+cd);
        }
            
    }
        
    return 0;
}
