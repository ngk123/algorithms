#include<stdio.h>
#include<stdlib.h>

int main()
{
int N,A[100003],ans=0,prev=0,i;

scanf("%d",&N);

for(i=0;i<N;i++)
{
	scanf("%d",&A[i]);
	if(A[i]!=0)ans+=1;
	else
	{
		if(prev<ans)prev=ans;
		ans=0;	
	}
}

printf("%d\n",prev);

return 0;
}

