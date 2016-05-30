#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
 int T,N,i,len,tmp,flag,dec;
 char str[1000004],ansS[1000004],rule[150],a,b,c,d;

 scanf("%d",&T);

 while(T--) 
 {
	
  	int r[150]={0};
	scanf("%d",&N);
	//printf("%d\n",N);
	for(i=0;i<N;i++)
	{
		scanf("%c%c%c%c",&a,&b,&c,&d);
		//rule0[i]=b; rule1[i]=d;	
                tmp=(int)b;
		r[tmp]=1;
		rule[(int)b]=d;		
	}

	scanf("%s",str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		tmp=(int)str[i];
		if(r[tmp]==1)ansS[i]=rule[tmp];
		else ansS[i]=str[i];		
	}
        
       for(i=0;i<len;i++)
	{
		if(ansS[i]=='0')ansS[i]='n';
		else break;
	}
	dec=0;
	for(i=0;i<len;i++)
	{
		if(ansS[i]=='.'){dec=1;break;}
	}
	if(dec==1)
	{
	for(i=len-1;i>=0;i--)
	{
		if(ansS[i]=='0')ansS[i]='n';
		else break;
	}
     if(ansS[i]=='.')ansS[i]='n';
     }
	flag=0;
	for(i=0;i<len;i++)
	{
		if(ansS[i]!='n'){printf("%c",ansS[i]);flag=1;}
	}
        if(flag==0)printf("0");
	
	printf("\n");
 } 






return 0;
}
