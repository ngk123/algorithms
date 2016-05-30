#include<iostream>
#include<queue>
using namespace std;


int main()
{
	int n,k,high,low,a;
	long long int sum;
	int count[1000002]={0};
	priority_queue<int> maxH;
	priority_queue<int,vector<int>,greater<int> > minH;
	sum=0;
	cin >> n;
	
	while(n--)
	{
		cin >> k;
		while(k--)
		{
			cin >> a;
			count[a]++;
			//cout << a << endl;
			maxH.push(a);
			minH.push(a);
		}	
		
		while(1)
		{
			high=maxH.top();
			maxH.pop();
			count[high]--;
			if(count[high]>=0)break;
		}
		while(1)
		{		
			low=minH.top();
			//cout << high << " "<<low << endl;
			minH.pop();
			count[low]--;
			if(count[low]>=0)break;
		}
		
		sum=sum+high-low;
		
	}
	cout << sum << endl;
	
	return 0;
	
	

}
