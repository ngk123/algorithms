#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;


bool arr[101][101];
int val[101][101];
int n;
queue<pair<int,int> > a;

int bfs(int i, int j)
{
	pii temp;
	int b,c,k,l;
	a.push(pii(i,j));	
	
	while(!(a.empty()))
	{	
		temp=a.front();
		a.pop();
		b=temp.first;
		c=temp.second;	
		
		if(arr[b][c]!=1)
		{
			arr[b][c]=1;
			for(k=-1;k<=1;k++)
				for(l=-1;l<=1;l++)
				{
					if(b+k<n && b+k>=0 && c+l<n && c+l>=0 && arr[b+k][c+l]==0 && val[b+k][c+l]==1)
					{
						a.push(pii(b+k,c+l));			
					}				
				}			
		}	
	}	
	return 0;
}




int main()
{
	int i,ans,j;
	
	cin >> n;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		cin >> val[i][j];	
	}
	ans=0;
		
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{	
			if(arr[i][j]==0 && val[i][j]==1)
			{
				//cout << "Hii\n" << i << " " << j << endl;;
				bfs(i,j);
				ans++;	
			}
		}
		
	}
	
	cout<< ans << endl;
	return 0;

}
