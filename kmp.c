#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  int T[100];
  int len,i,pos,m,j,lens,k;
  char s[101],w[101];
  scanf("%s",s);
  T[0]=-1;T[1]=0;
  printf("s=%s\n",s);
   
  scanf("%s",w);
 

  len = strlen(w);
  lens=strlen(s);
  printf("len = %d\n",len);
  pos=0;
  for(i=2;i<=len;i++)
    {
      if(w[pos]==w[i-1])
	{
	  T[i]=T[i-1]+1;
	  pos++;
	}
      else
	{
	  T[i]=0;
          pos=0;	  
	} 
    }

  for(i=0;i<=len;i++)
    {

      printf("T[%d]=%d\t",i,T[i]);
    }

  m=0;j=0;

  for(k=0;m+j<lens;k++)
    {

      if(s[m+j]==w[j])
	{
          
          j++;
          if(j==len){printf("ans=%d",m);return 0 ;}
	}
      else
	{
	  m=m+j-T[j];
          if(T[j]>-1)
            j=T[j];
	  else j=0;            

	}
    }


  //  printf("m=%d",m);





  return 0;
}


