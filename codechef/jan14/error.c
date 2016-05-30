#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  int T,check,i,resa,resb,len;
  char A[100002];
  char a[]="101";
  char b[]="010";

  scanf("%d",&T);

  while(T--)
    {
      check=0;
      scanf("%s",A);
      len=strlen(A);
      for(i=0;i<len;i++)
	{

	  resa=strncmp(a,A+i,3);
	  resb=strncmp(b,A+i,3);
	  if(resa==0 || resb==0){check=1;break;}
	}
      if(check==1)
	{
	  printf("Good\n");
	}
      else
	{
	  printf("Bad\n");
	}
    }



  return 0;
 }
