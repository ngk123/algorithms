#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  char a[101];
  int len,i,count[3],fc,j;
  fc=0;
  scanf("%s",a);
  count[0]=count[1]=count[2]=0;

  len=strlen(a);


  for(i=0;i<len;i++)
    {

      if(a[i]=='1')
      {
	count[0]+=1;
        fc++;
      }

      else if(a[i]=='2')
      {
	count[1]+=1;
        fc++;
      }

      else if(a[i]=='3')
      {
	count[2]+=1;
        fc++;
      }



    }



      for(j=0;j<count[0];j++)
	{
	  printf("1");fc--;
          if(fc==0)break;       
	  printf("+");
	}
      for(j=0;j<count[1];j++)
	{
	  printf("2");fc--;
          if(fc==0)break;
       printf("+");       
 
	}
    for(j=0;j<count[2];j++)
	{
	  printf("3");fc--;
          if(fc==0)break;
     printf("+");       
 
	}


    return 0;


}
