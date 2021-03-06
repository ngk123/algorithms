#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
#define INF 1000000;

class Orienteering {
 public:
 void main();
 int calones(int);
 int calbit(int);
 int bfs(int ,int ,int,int,int);
 };
 

typedef struct height{
int xc;
int yc;
int ht;
}height;

int dist[20][20];
int dp[1<<20][20];
int visited[101][101];
int arr[101][101];
int dis[101][101];
queue<height> Q;


int Orienteering::calones(int n)
{
	int temp=n;
	int cnt=0;
	while(temp>0)
	{
		if(temp%2==1)
		{
			cnt++;
		}
		temp=temp/2;
	}
	return cnt;
}

int Orienteering::calbit(int n)
{
	int cnt=0;
	while(n>0)
	{
		if(n%2==1)
		{
			break;
		}
		cnt++;
		n=n/2;
	}
	return cnt;
}

int Orienteering::bfs(int x,int y,int id,int H ,int W)
{
	height temp,temp2;
	int i,a,b,c,j;
	memset(visited,0,sizeof(visited));
	for(i=0;i<H;i++)
	{
		for(j=0;j<W;j++)
		{	
			dis[i][j]=INF;	
		}
	}
	temp.xc=x;
	temp.yc=y;
	temp.ht=0;
	Q.push(temp);
	while(!Q.empty())
	{
		temp=Q.front();
		Q.pop();
		a=temp.xc;
		b=temp.yc;
		c=temp.ht;
		if(visited[a][b]==0)
		{
				visited[a][b]=1;					
				dis[a][b]=c;		
		
			if(a+1<H && arr[a+1][b]!=5 && visited[a+1][b]==0 )
			{
				temp2.xc=a+1;
				temp2.yc=b;
				temp2.ht=c+1;
				Q.push(temp2);		
			}
		
			if(a-1>=0 && arr[a-1][b]!=5 && visited[a-1][b]==0)
			{
				temp2.xc=a-1;
				temp2.yc=b;
				temp2.ht=c+1;
				Q.push(temp2);		
			}
		
			if(b-1>=0 && arr[a][b-1]!=5 && visited[a][b-1]==0)
			{
				temp2.xc=a;
				temp2.yc=b-1;
				temp2.ht=c+1;
				Q.push(temp2);		
			}
		
			if(b+1<W && arr[a][b+1]!=5 && visited[a][b+1]==0)
			{
				temp2.xc=a;
				temp2.yc=b+1;
				temp2.ht=c+1;
				Q.push(temp2);		
			}			
		}	
	}	
}


 void Orienteering::main() {
   	vector<pii> cp;
	int temp,k,mk,srcId,ones,idone;
	string str;
	pii src;
	pii goal;
	int w,h,i,j;
	 cin >> w >> h;
	for(i=0;i<h;i++)
	{
		cin >> str;
		for(j=0;j<w;j++)
		{	
			if(str[j]=='#')
			{
				arr[i][j]=5;
			}	
			else if(str[j]=='.')
			{
				arr[i][j]=4;
			}
			else if(str[j]=='@')
			{
				arr[i][j]=3;
				cp.push_back(pii(i,j));
			}
			else if(str[j]=='S')
			{
				arr[i][j]=1;
				src.first=i;
				src.second=j;
			//	cp.push_back(pii(i,j));
			}
			else
			{
				arr[i][j]=2;
				goal.first=i;
				goal.second=j;	
				//cp.push_back(pii(i,j));			
			}						
		}				
	}
	
	cp.push_back(goal);
	cp.push_back(src);
	
	for(i=0;i<cp.size();i++)
	{
		bfs(cp[i].first,cp[i].second,i,h,w);
		for(j=0;j<cp.size();j++)
		{
			dist[i][j]=dis[cp[j].first][cp[j].second];		
		}
	}		
	
	temp=1<<(cp.size()-1);
	for(i=0;i<temp;i++)
	{	
		for(j=0;j<cp.size();j++)
		{
			dp[i][j]=INF;
		}	
	}
		

	srcId=cp.size()-1;
	for(i=1;i<temp;i++)
	{
		ones=calones(i);
		if(ones==1)
		{
			idone=calbit(i);
			dp[i][idone]=dist[srcId][idone];
		}
		else
		{
			for(j=0;j<srcId;j++)
			{
				if((1<<j) & i)
				{
					int mk = (1<<j)^i;
					for(k=0;k<srcId;k++)
					{
						if((1<<k) & mk)
						{
							dp[i][j]=min(dp[i][j],dp[mk][k]+dist[k][j]);
						}					
					}
				}
			}			
		}		
	}		
	cout << dp[temp-1][cp.size()-2] << endl;	 
   
 }
 
 int main(int argc, char* argv[]) {
 Orienteering o;
 o.main();
 return 0;
 }

