#include<stdio.h>
#include<stdlib.h>

int main()
{
	int A,B,dig,ans;
	scanf("%d%d",&A,&B);
	ans=A-B;
	dig=ans%10;
 	ans=ans/10;
 	if(dig!=9)
 	dig=(dig+1);
 	else
 	dig=1;
	ans=(ans*10)+dig;
	printf("%d\n",ans);
	return 0;
}
