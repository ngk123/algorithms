#include<stdlib.h>
#include<stdio.h>

int main()
{
	FILE *fp;
	int count=0;
	int a;
	fp=fopen("primes.txt" , "r");
	
	while(fscanf(fp,"%d",&a)==1){count++; if(count==1000){printf("\n");}printf("%d ,",a);}
	
	return 0;
}