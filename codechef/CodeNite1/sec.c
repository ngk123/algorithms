#include<stdio.h>

#include<stdlib.h>
 
#include<string.h>


int main()
{
  int count,b,c[200001];
  count=0;
  char *a;
  float mean;
  a=(char*)(7*sizeof(char));
  while(1)
    {

      scanf("%s",a);
      if(strcmp(a,"END")==0){break;}
      if(strcmp(a,"ADD")==0){scanf("%d",&c[count]);count++}
      if(strcmp(a,"MEDIAN")==0){
	if(count%2==1){printf("%d\n",c[count/2]);}
	  else
	    {

	      mean=c[count/2]+c[(count/2)-1];
	      mean=mean/2;
              printf("%f\n",mean);

	    }



    }


  return 0;

}
