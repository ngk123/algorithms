#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i,j;
  char word[6][4];
 
  
  for(i=0;i<6;i++)
    {
      scanf("%s",word[i]);;
    }
    for(j=5;j>=0;j--){
      for(i=2;i>=0;i--) {  
        printf("%c",word[j][i]);
    }
    printf("\n");
}

  return 0;
}
