#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,s,cnt=0,i,j,flag;
	vector<int> maxd,mind;
	
	cin >> m >> s;
	if(m==1 && s==0)
	{
		cout << "0  0"<<endl;
		return 0;
	}
	
	if(m>1 && s==0)
	{
		cout << "-1  -1"<<endl;
		return 0;	
	}
	if(s>m*9)
	{
		cout << "-1  -1"<<endl;
		return 0;
	}
	
	flag=0;
	for(i=0;i<m;i++)
	{
		if(s>=9)
		{
			flag=1;
			s=s-9;
			maxd.push_back(9);
			mind.push_back(9);
		}
		else if(s>0)
		{
			flag=1;
			maxd.push_back(s);
			mind.push_back(s);
			s=0;
		}
		else
		{		
			cnt++;
			maxd.push_back(0);
			mind.push_back(0);
		}		
	}
	
	sort(maxd.begin(),maxd.end());
	sort(mind.begin(),mind.end());
	if(cnt>0)
	{
		mind[0]=1;
		for(i=1;i<m;i++)
		{
			if(mind[i]>0)
			{
				mind[i]-=1;
				break;
			}
		}
		sort(mind.begin()+1,mind.end());
	}
	for(i=0;i<m;i++)
	{
		cout << mind[i];
	}	
	cout << " ";
	for(j=m-1;j>=0;j--)
	{
			cout << maxd[j];
	}
	cout << endl;
	return 0;
}
