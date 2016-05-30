#include<stdio.h>
#include<stdlib.h>



int main()
{
  char c;
  int T,d,i,check;
  

  scanf("%d",&T);
  getchar();

  while(T--)
    {  
      int a[26]={0};

      check=0;
      while(1)
	{
	 c= getchar();
  	 d=(int)c;
	 if(d==10)break;
	 if(d==32){check=1; continue;}
	 if(check==0)
	   {
	     
	     if(d>96)a[d-97]++;
	     else a[d-65]++;
	   }
	 else
	   {
	     if(d>96)a[d-97]--;
	     else a[d-65]--;
	   }
	 }  

      /*
      while(1)
	{
	  printf("Second\n");

	 c= getchar();
  
	 if(d==32 || d==10)break;
	 d=(int)c;
      



	}
*/

      for(i=0;i<26;i++){if(a[i]!=0)break;}
      if(i==26)
	{
	  printf("YES\n");
  
	}
      else
	{
	  printf("NO\n");

	}

    }




  return 0;

}
