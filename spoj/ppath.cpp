#include<bits/stdc++.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;
typedef pair<int,int> pii;

int  isPrime[10001]={0};
int visited[10001];

int main()
{
	queue<pii> Q;
	int temp,i,j,T,a,b,flag,k,num;
	string str2;
	pii t;
	char buffer[5];
	isPrime[0]=	isPrime[1]=1;
	temp=sqrt(10000);
	for(i=2;i<=temp;i++)
	{
		if(isPrime[i]==0)
		{
			for(j=2*i;j<=10000;j+=i)
			{
				isPrime[j]=1;		
			}					
		}	
	}	
	cin >> T;
	while(T--)
	{
		memset(visited,0,sizeof(visited));
		cin >> a >> b;
		Q.push(pii(a,0));
		visited[a]=1;
		flag=0;		
		while(!Q.empty())
		{
			t=Q.front();
			Q.pop();
			if(t.first==b)
			{
				flag=1;
				cout << t.second << endl;
				break;		
			}
			ostringstream oss;
			oss << t.first;
			str2=oss.str();	
	
			
			for(k=1;k<=9;k++)
			{		
				i=0;
					if(str2[i]!=(char)(k+48))
					{
						string str3="";
						str3+=str2;
						str3[i]=(char)(k+48);
						num=atoi(str3.c_str());
						if(visited[num]==0 && isPrime[num]==0)
						{
							//cout << num << endl;
							Q.push(pii(num,t.second+1));
							visited[num]=1;
						}						
					}										
			}	
			
	
			for(k=0;k<=9;k++)
			{		
				for(i=1;i<4;i++)
				{
					if(str2[i]!=(char)(k+48))
					{
						string str3="";
						str3+=str2;
						str3[i]=(char)(k+48);
						num=atoi(str3.c_str());
						if(visited[num]==0 && isPrime[num]==0)
						{
							//cout << num << endl;
							Q.push(pii(num,t.second+1));
							visited[num]=1;
						}						
					}						
					//cout << str2 << endl;	
				}
			}		
		}
		if(flag==0)
		cout << "Impossible\n";			
		queue<pii> empty;
        swap( Q, empty );
	}


	return 0;
}

