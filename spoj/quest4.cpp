#include<iostream>
#include<vector>
using namespace std;

bool mbp(int idx,int edge[][240],vector<int> &seen, vector<int> &matching)
{
	int j;
	for(j=0;j<240;j++)
	{
		if(edge[idx][j] && seen[j]==0)
		{
			seen[j]=1;
			if(matching[j]==-1 || mbp(matching[j],edge,seen,matching))
			{
				matching[j]=idx;
				return true;
			}
		}		
	}		
	return false;
}

int main()
{
	int t,i,a,b,num;			
	cin >> t;	
	while(t--)
	{
		int edge[240][240]={0},cnt=0;
		bool res=false;		
		cin >> num;
		for(i=0;i<num;i++)
		{
			cin >> a >> b;
			edge[a][b+120]=1;
		}
		//edge[b+120
		vector<int> matching(240,-1);
		for(i=0;i<240;i++)
		{			
			vector<int> seen(240,0);
			res=mbp(i,edge,seen,matching);		
			if(res==true)cnt++;
		}	
		cout << cnt << endl;					
	}
	return 0;	
}
