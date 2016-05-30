#include<stdio.h>
#include<stdlib.h>

void print(int num);

int main()
{
	int a[7]={137,1315,73,136,255,1384,16385},binary[30],i,j,k;
	
	for(i=0;i<7;i++)
	{
		printf("%d=",a[i]);print(a[i]);
		printf("\n");
	}	
}

void print(int num)
{
	int i;
	if(num==0){printf("0");return ;}
	if(num==1){printf("2(0)");return;}
 	for(i=31;i>=0;i--)
 	{
 		if(((1<<i)&num) !=0)
 		{
 		    if(i>1 && (((1<<i)-1)&num)!=0 )
 		    {
 		    	printf("2(");
 				print(i);
	 			printf(")+");		
	 		}
	 		else if(i>1 &&(((1<<i)-1)&num)==0)
 		    {
 		    	printf("2(");
 				print(i);
	 			printf(")");		
	 		}
 			else if(i==1 && (num&1)!=0)
 			printf("2+");
 			else if(i==1  && (num&1)==0)
 			printf("2");
 			else if(i==0)
 			{
 				printf("2(");
 				print(i);
	 			printf(")");
 			}
 		}	 
 	}
    return;
}
