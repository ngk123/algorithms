#include<bits/stdc++.h>

using namespace std;
int dfs(int x,int y,int len);
bool check(int x,int y);
int dim;
int visited[3][3];
int ans=0;
int cnt=0;

int *xK;
int *yK;
int startX;
int startY;
int main()
{	
	int i,j;
	xK=(int*)malloc(sizeof(int)*8);
	yK=(int*)malloc(sizeof(int)*8);	
	int xk[8]={1,1,-1,-1,2,2,-2,-2};
	int yk[8]={2,-2,2,-2,1,-1,1,-1};
	
	for(i=0;i<8;i++){xK[i]=xk[i];yK[i]=yk[i];}
	cin >> dim;
	
	for(i=0;i<dim;i++){
	for(j=0;j<dim;j++)
	{
		//ans++;
		visited[i][j]=1;
		startX=i;
		startY=j;
		dfs(i,j,1);
		visited[i][j]=0;
	}
	}
	cout << ans<< " " << cnt << endl;	
	return 0;
}

bool check(int x,int y)
{
	if(x<dim && x>=0 && y<dim && y>=0)return true;
	else return false;	
}

int dfs(int x,int y,int len)
{
	int i,j,tx,ty;
	for(i=-1;i<=1;i++)
	{
		for(j=-1;j<=1;j++)
		{
			if(check(x+i,y+j) && visited[x+i][y+j]==0 )
			{

				//cout << x+i << " " << y+j << endl;	
				len++;
				if(len>=4 && len<=9 )		
				ans++;
				visited[x+i][y+j]=1;
				dfs(x+i,y+j,len);
				len--;
				visited[x+i][y+j]=0;								
			}		
		}
	}
	
	for(i=-1;i<=1;i++)
	{
		for(j=-1;j<=1;j++)
		{
			tx=2*i;
			ty=2*j;
			if(check(x+tx,y+ty) && visited[x+tx][y+ty]==0 && visited[x+i][y+j]==1)
			{

			//	cout << x+i << " " << y+j << endl;	
				len+=2;
				if(len>=4 && len<=9 )						
				ans++;
				visited[x+tx][y+ty]=1;
				dfs(x+i,y+j,len);
				len-=2;
				visited[x+tx][y+ty]=0;								
			}		
		}
	}	
	
	for(i=0;i<8;i++)
	{		
		if(check(x+xK[i],y+yK[i]) && visited[x+xK[i]][y+yK[i]]==0)
		{
			//cout << x+xK[i] << " " << y+yK[i] << endl;	
			len++;
			if(len>=4 && len<=9 )	
			ans++;
			visited[x+xK[i]][y+yK[i]]=1;
			dfs(x+xK[i],y+yK[i],len);
			len--;
			visited[x+xK[i]][y+yK[i]]=0;								
		}			
	}
	return 0;	
}
