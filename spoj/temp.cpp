#include<iostream>
#include<algorithm>
#include<queue>
#include<string.h>
#include<cstdio>
using namespace std;

typedef struct node
{
char s[2000];
int mod;
}node;

void deep(int a)
{
	int visited[20000]={0};
	int pre;
	queue<node>  b;
	char t1[2000],t2[2000];
	node temp;
	strcpy(temp.s,"1");
	temp.mod=1%a;
	visited[temp.mod]=1;
	b.push(temp);	
	
	while(!(b.empty()))
	{
		temp=b.front();
		visited[temp.mod]=1;
		if(temp.mod%a==0)
		{
			printf("%s\n",temp.s);
			return ;
		}
		else
		{
			b.pop();
			pre=temp.mod;
			strcpy(t1,temp.s);
			strcpy(t2,temp.s);
			strcat(t1,"0");
			//temp.s=t1;
			strcpy(temp.s,t1);
			temp.mod=(pre*10)%a;
			if(visited[temp.mod]==0)
			b.push(temp);
			strcat(t2,"1");
			strcpy(temp.s,t2);
			temp.mod=(pre*10+1)%a;
			if(visited[temp.mod]==0)
			b.push(temp);
		}
	}
	return ;
}

int main()
{
	int t,a;
	
	cin >> t;
	while(t--)
	{
		scanf("%d",&a);		
		deep(a);
		
	}
	
	return 0;
}


