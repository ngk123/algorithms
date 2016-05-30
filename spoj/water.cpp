#include<bits/stdc++.h>
using namespace std;







int main()	
{
	int m,n,T,i,j,temp,maxr,fans;
	int arr[101][101],ans[101][101],flag1[101][101],flag2[101][101],flag3[101][101],flag4[101][101];
	
	cin >> T;
	while(T--)
	{
		cin >> m >> n;		
		fans=0;
		for(i=0;i<m;i++)
		for(j=0;j<n;j++){
		cin >> arr[i][j];
		ans[i][j]=10001;
		flag1[i][j]=0;
		flag2[i][j]=0;
		flag3[i][j]=0;
		flag4[i][j]=0;
		}	
			
	
		for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(ans[i][j]!=10001 &&  flag1[i][j]==1 && flag2[i][j]==1 && flag3[i][j]==1 && flag4[i][j]==1)
			{
				fans+=ans[i][j];
			}
		}
		}
		cout << fans << endl;
	}
	return 0;
}

