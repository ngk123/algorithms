#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<cstdio>

using namespace std;
struct entry
{
	int x;
	int idx;
	int tillYet;
};


bool compare(entry n1, entry n2)
{
	if(n1.x<n2.x)return true;
	else return false;
}


bool compare1(entry n1, entry n2)
{
	if(n1.x<n2.x)return true;
	else return false;
}

bool compare2(entry n1, entry n2)
{
	if(n1.idx<n2.idx)return true;
	else return false;
}


bool prime[100000000]={0};

void sieveOfEr(int n)
{
    int temp,i,j;
	temp=sqrt(n);
	
	for(i=4;i<=n;i+=2)
	{
		prime[i]=1;
	
	}
	
	for(i=3;i<=temp;i+=2)
	{
		if(prime[i]==0)
		{
			for(j=i*i;j<=n;j+=2*i)
			{	
				prime[j]=1;
			}
		}
	
	}

}


double piFunction(int x)
{
	return ((double)x/log((double)x));
}



int main()
{
	int cnt,max,first,i,j,countTill;
	double tempAns;
	entry n;
	vector <entry>numbers;
	cnt=0;
	max=-1;
	prime[0]=prime[1]=1;
	prime[2]=prime[3]=0;
	while(1)
	{   
	    scanf("%d",&n.x);
		if(n.x==0)break;
		n.idx=cnt;
		n.tillYet=0;
		if(n.x>max)
		{
			max=n.x;
		}
		numbers.push_back(n);
		cnt++;
 	}
	
	
	sieveOfEr(max);
	
	sort(numbers.begin(),numbers.end(),compare1);
	
	countTill=0;
	first=numbers[0].x;
	for(i=0;i<=first;i++)
	{
		if(prime[i]==0)countTill++;	
	}	 	
	
	numbers[0].tillYet=countTill;		
	for(i=1;i<cnt;i++)
	{
		countTill=0;
		for(j=numbers[i-1].x+1;j<=numbers[i].x;j++)
		{
			if(prime[j]==0)countTill++;				
		}		
		numbers[i].tillYet=numbers[i-1].tillYet+countTill;
	}		
	
	sort(numbers.begin(),numbers.end(),compare2);
	
	for(i=0;i<numbers.size();i++)
	{
		//cout<<numbers[i].tillYet<<endl;
		tempAns=piFunction(numbers[i].x);
		tempAns=abs(((double)numbers[i].tillYet-tempAns)*100)/(double)numbers[i].tillYet;
		printf("%.1lf\n",tempAns);	    
	}
	
	
		
	

}
