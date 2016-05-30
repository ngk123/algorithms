#include<stdio.h>
#include<stdlib.h>

int main()
{
  int t,i,j; 
  char s1[1001],s2[1001],c,d;
  char* fmt="%[^\n]%*c";
  scanf("%d",&t);
  for(i=0;i<t;i++)
    {

      scanf(fmt,s1);
      printf("%s",s1);
      scanf(fmt,s2);
      // scanf("%s",s1);
      /*

         j=0;
      c=getchar();
      while(c!='\n')
	{          
	  s1[j++]=c;
          c=getchar();
	}
      
      
      j=0;
      d=getchar();
      while(d!='\n')
	{          
	 s2[j++]=d;
	 d=getchar();
       }
      */
      printf("s1=%s,s2=%s\n",s1,s2);

    }


  return 0;
}
