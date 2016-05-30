#include<stdio.h>
#include<stdlib.h>


int main()
{
  int i,j,multiplication[100][100];


  for(i=1;i<=100;i++)for(j=1;j<=100;j++){multiplication[i-1][j-1]=i*j;printf("%4d,",multiplication[i-1][j-1]);}


  return 0;
}
