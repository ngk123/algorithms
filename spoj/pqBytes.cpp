#include<iostream>
#include<vector>
#include<set>
#include<queue>
#define infi 1000000007
using namespace std;

typedef struct node{
int row;
int col;
int time;
}node;

struct timeByless
{
	bool operator()(const node& a, const node& b)
	{
		return (a.time>b.time);
//			return true;
		/*if(a.time < b.time) 
			return false;
		if(a.time==b.time && a.row != b.row ) return (a.row > b.row);
		if(a.time==b.time && a.row == b.row) return (a.col > b.col);
		return false; */
	}
};



int guards[100][100];

int dis[100][100];

int dj(int m,int n,int a, int b,int t)
{
	int visited[100][100]={0};
	priority_queue<node,vector<node>,timeByless> Q;
	node temp,rtemp;
	int i,j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)dis[i][j]=infi;
	temp.row=0;
	temp.col=0;
	temp.time=guards[0][0];
	dis[0][0]=guards[0][0];

	Q.push(temp);

	while(!(Q.empty()))
	{
		temp=Q.top();

		
		if(visited[temp.row][temp.col]==0)
		{
			visited[temp.row][temp.col]=1;
		
			if(temp.col-1>=0)
			{
				if(visited[temp.row][temp.col-1]==0 && temp.time+guards[temp.row][temp.col-1]<dis[temp.row][temp.col-1])
				{
					rtemp.row=temp.row;
					rtemp.col=temp.col-1;
					rtemp.time=temp.time+guards[rtemp.row][rtemp.col];
					dis[rtemp.row][rtemp.col]=rtemp.time;
					Q.push(rtemp);

				}
			}	

	
			if(temp.row-1>=0)
			{
				if(visited[temp.row-1][temp.col]==0 && temp.time+guards[temp.row-1][temp.col]<dis[temp.row-1][temp.col])
				{
					rtemp.row=temp.row-1;
					rtemp.col=temp.col;
					rtemp.time=temp.time+guards[rtemp.row][rtemp.col];
					dis[rtemp.row][rtemp.col]=rtemp.time;
				
					Q.push(rtemp);				
				}
			}

			if((temp.row+1)< m)
			{
				if(visited[temp.row+1][temp.col]==0 && temp.time+guards[temp.row+1][temp.col]<dis[temp.row+1][temp.col])
				{
					rtemp.row=temp.row+1;
					rtemp.col=temp.col;
					rtemp.time=temp.time+guards[rtemp.row][rtemp.col];
					dis[rtemp.row][rtemp.col]=rtemp.time;
					 Q.push(rtemp);
				}
			}

			if((temp.col+1)<n)
			{
				if(visited[temp.row][temp.col+1]==0 && temp.time+guards[temp.row][temp.col+1]<dis[temp.row][temp.col+1])
				{
					rtemp.row=temp.row;
					rtemp.col=temp.col+1;
					rtemp.time=temp.time+guards[rtemp.row][rtemp.col];
					dis[rtemp.row][rtemp.col]=rtemp.time;
					 Q.push(rtemp) ;			
				}
			}	
		}
		Q.pop();
		
	}
	
	
	if(dis[a-1][b-1]>t)
	{
		cout << "NO" << endl;
	}	
	else
	{
		cout << "YES" << endl;
		cout << t-dis[a-1][b-1] << endl;	
	}
}

int main()
{
	int T,m,n,a,b,t,i,j;
	cin >> T;
	while(T--)
	{
		cin >> m >> n;
		for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		cin>>guards[i][j];		
		cin >> a >> b >> t;			
		dj(m,n,a,b,t);
	}	 
	return 0;
}


