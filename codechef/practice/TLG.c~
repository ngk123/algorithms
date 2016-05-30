#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int read()
{
char c = 0;
int input = 0;
while(c < 33)
c = getchar_unlocked();
while(c > 33)
{
input = input*10+c-'0';
c = getchar_unlocked();
}
return input;
}




int main()
{
int N,win,ti,si,max,l1,l2,temp,lead,pl;
max=-1;
N=read();
lead=0;

while(N--)
{
si=read();
ti=read();

lead+=(si-ti);
temp=abs(lead);
//printf("lead:%d temp : %d\n",lead,temp);
if(temp>max && lead>0)
{

	pl=1;
	max=temp;
}

else if(temp>max && lead<0)
{

	pl=2;
	max=temp;
}
}
printf("%d %d\n",pl,max);
return 0;
}




