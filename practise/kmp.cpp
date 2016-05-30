#include<cstdio>
#include<cstdlib>
#include<cstring>

char mStr[100];
char patt[20];
int failure[20];

void calculateF(char str[])
{
	int len,j,i;
	failure[0]=0;
	j=0;
	i=1;
	len=strlen(str);
	while(i<len)
	{
		while(i<len && str[i]==str[j])
		{
			j++;
			failure[i]=j;
			i++;
		}
		if(j==0)
		{
			failure[i]=j;
			i++;				
		}
		else
		{
			j=failure[j-1];
		}
	}
	return ;
}


int kmp()
{
	int len1,len2,i,j,flag;
	len1=strlen(mStr);
	len2=strlen(patt);
	
	for(i=0;i<=(len1);)
	{
		flag=0;
		if(mStr[i]==patt[j])
		{
			j++;
			i++;
			
		}
		else if(mStr[i]!=patt[j] && j!=0)
		{
			j=failure[j-1];
			flag=1;
		}
		if(j==0 && flag==0)i++;	
		if(j==len2)
		{
			printf("%d\n",i-len2); 
			j=failure[j-1];
		}
		
				
	}
	return 0;
}




int main()
{
	int i,len,T;
	//scanf("%d",&T);
	//while(T--)
	{
		scanf("%s",mStr);
		scanf("%s",patt);
		calculateF(patt);
		len=strlen(patt);
		for(i=0;i<len;i++)
		{
			printf("F[%d]:%d\n",i,failure[i]);
		}
		kmp();		
	}
	return 0;
}


