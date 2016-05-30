#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{
	int t,n,T,m,i,a,maxdiff,mindiff,temp;
	vector<int> nice,hole;
	
	cin >> T;
		
	while(T--)
	{
		
		cin>>n>>m;
		
		for(i=0;i<n;i++)
		{
			cin >> a;
			nice.push_back(a);
		}
		
		for(i=0;i<m;i++)
		{

			cin >> a;
			hole.push_back(a);
		}
		
		sort(nice.begin(),nice.end());
		sort(hole.begin(),hole.end());
		
		maxdiff=1000000000;
		mindiff=0;
	
		while(maxdiff>mindiff)
		{
			temp=(maxdiff+mindiff)/2;
			t=0;
			for(i=0;i<n;)
			{
				if(abs(nice[i]-hole[t])>temp)
				{
					t++;
					int right=m-t;
					int rightn=n-i;
					if(rightn>right)break;
							
				}
				
				else
				{
					i++;					
					t++;
				}
			}
			
			if(i<n){
			mindiff=temp+1;
			}
			else
			{
				maxdiff=temp;
			}
			
		}
		
		cout << maxdiff << endl;
	
		nice.clear();
		hole.clear();	
	
	}
	
	
return 0;	

}
