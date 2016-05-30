#include<iostream>
#include<cstdio>
#include<queue>
#include<cmath>
#include<algorithm>
using namespace std;

class CompareEventPoint {
    public:
    bool operator()(long long int& t1,long long  int& t2) // Returns true if t1 is earlier than t2
    {
       if(t1>t2)return true;
       return false;
    }
};
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,i,j;
		cin >> n;
		int subset[100000];
		int count=pow(2,n); 
		
		int numbers[n];
		for(i=0;i<count;i++)
		scanf("%d",&subset[i]);
		
		sort(subset,subset+count);
		
		
 		
		numbers[0]=subset[1];
		numbers[1]=subset[2];
		
		priority_queue<long long int,vector<long long int>,CompareEventPoint> temp;
		vector<int> permanent;
		permanent.push_back(numbers[0]);
		permanent.push_back(numbers[1]);
		permanent.push_back(numbers[0]+numbers[1]);
		temp.push(numbers[0]+numbers[1]);
		
		
		
		int current=2;
		for(i=3;i<count;i++)
		{
			if(!temp.empty()){
			// << temp.top();
			if(subset[i]==temp.top())
			{
				//cout << "popping " << temp.top() << endl;
				temp.pop();
			}
			else{
			numbers[current]=subset[i];
				//cout << "inserting " << subset[i] << endl;
				int size=permanent.size();
				permanent.push_back(subset[i]);
				for(j=0;j<size;j++)
				{
				long long int val=permanent[j];
				
				permanent.push_back(val+subset[i]);
				temp.push(val+subset[i]);
				}
				current++;
			}
			}
			else
			{
				numbers[current]=subset[i];
				//cout << "inserting " << subset[i] << endl;
				int size=permanent.size();
				permanent.push_back(subset[i]);
				for(j=0;j<size;j++)
				{
				long long int val=permanent[j];
				permanent.push_back(val+subset[i]);
				temp.push(val+subset[i]);
				}
				current++;
			}
			
			if(current==n)
			break;
		}
		
		for(i=0;i<n;i++)
		cout << numbers[i] << " ";
		
		cout << endl;
	}
}
