#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,id,flag,cnt,temp1,temp2,i,diff,midId,sz;
	vector<int> v;
	string str;
	cin >> n >> id;
	id=id-1;
	cin >> str;
	midId=n/2-1;
	
	if(id>midId)
	{
		id=n-1-id;
	}
	cnt=0;
	flag=0;
	for(i=0;i<=midId;i++)
	{
		if(str[i]!=str[n-1-i])
		{
			v.push_back(i);
			flag=1;
			diff=abs((int)str[i]-(int)str[n-1-i]);
			if(diff>(26-diff))cnt+=(26-diff);
			else
			{
				cnt+=diff;
			}
		}		
	}
	//cout << cnt << endl;
	if(flag==0)	
	{
		cout << 0 << endl;
		return 0;
	}
	sz=v.size();
	sort(v.begin(),v.end());
	
	if(v[0]>=id)
	{
		cnt+=v[sz-1]-id;
	}
	else if(v[sz-1]<=id)
	{
		cnt+=id-v[0];
	}
	else
	{
		temp1=v[sz-1]-id ;
		temp2=id-v[0];
		//cout << temp1 << " "<< temp2 << endl;
		if(temp1 > temp2)
		{
			cnt+=(2*temp2+temp1);
		}
		else
		{
			cnt+=(2*temp1+temp2);		
		}
		
	}
	cout << cnt << endl;
	
	return 0;
}
