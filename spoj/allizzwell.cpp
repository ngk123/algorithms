#include<iostream>
#include<cstdio>
using namespace std;

char tar[]="ALLIZZWELL";
char arr[100][100];
int dfs(int r, int c,int i , int j ,int idx , int visited[][100])
{
	int l,m,row,col;
	//cout << idx << "  " << tar[idx] << endl;
	//cout << "hiiiii" << endl;
	if(idx==10){return 1;}
	int max1 = 0;
	for(l=-1;l<=1;l++)
	{
		for(m=-1;m<=1;m++)
		{
			row=i+l;
			col=j+m;
			if(l==0 && m==0)
			{
								
			}
			else if(row<r && row>=0 && col<c && col>=0)
			{
				if(visited[row][col]==0 && tar[idx]==arr[row][col])
				{
					visited[row][col]=1;
					int v=dfs(r,c,row,col,idx+1,visited);
						visited[row][col]=0;
					if(v==1) { return 1;}
				}
			}
				
			
		}
	}
	
	return 0;

}


int main()
{
	int T,r,c,i,j,flag;
	char str[100];
	cin>>T;
	
	while(T--)
	{
		cin >> r >> c;
		flag=0;
		for(i=0;i<r;i++)
		{
			cin >> str;
			//cout << str  << endl;
			for(j=0;j<c;j++)
			arr[i][j]=str[j];	
		}
		int visited[100][100]={0};
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				
				if(arr[i][j]=='A')
				{
					
					visited[i][j]=1;
					flag=dfs(r,c,i,j,1,visited) ;
					//cout << flag << endl;
					if(flag==1){printf("YES\n");break;}
					visited[i][j]=0;
				}
			}		
			if(flag==1)break;
		}
		if(flag==0)printf("NO\n");
	
	}



	return 0;
}
