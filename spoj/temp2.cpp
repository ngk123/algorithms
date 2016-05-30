#include<iostream>
#include<algorithm>
#include<queue>
#include<string.h>
#include<cstdio>
using namespace std;

typedef struct node
{
int pmod;
int mod;
char s[2000];
}node;

int parent[20000]={0};
int getn(int mod,int a)
{
	int temp,i=0,j;
	char str[20000];
	while(parent[mod]!=-1)
	{
		temp=parent[mod]*10%a;
		if(temp==mod)
		{
			str[i]='0';
		}			
		else
		{
			str[i]='1';
		}
		mod=parent[mod];
		i++;		
	}	
    str[i]='1';
    for(j=i;j>=0;j--)
    {
    	cout << str[j] ;
    }
	cout << endl;
	return 0;
}


void deep(int a)
{
	int i;
	int visited[20000]={0};
	int pre;
	queue<node>  b;
	char t1[2000],t2[2000];
	node temp;
	temp.mod=1%a;
	strcpy(temp.s,"1");
	//temp.s="1";
	temp.pmod=-1;
	parent[temp.mod]=-1;
	visited[temp.mod]=1;
	b.push(temp);	

	while(!(b.empty()))
	{
		temp=b.front();
		visited[temp.mod]=1;
		parent[temp.mod]=temp.pmod;
		if(temp.mod%a==0)
		{
			cout << temp.s << endl;
			getn(temp.mod ,a);
			return ;
		}
		else
		{
			pre=(temp.mod)%a;
			temp.pmod=pre;
			temp.mod=(pre*10)%a;
			strcpy(t1,temp.s);
			strcpy(t2,temp.s);
			strcat(t1,"0");
			strcpy(temp.s,t1);
			if(visited[temp.mod]==0)
			{
				b.push(temp);
			}
			temp.mod=(pre*10+1)%a;		
			strcat(t2,"1");	
			strcpy(temp.s,t2);
			if(visited[temp.mod]==0)
			{
				b.push(temp);
			}
			b.pop();
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
