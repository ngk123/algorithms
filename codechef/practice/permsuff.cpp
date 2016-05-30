#include<iostream>
#include<queue>

using namespace std;
class valI{
public: 
int val;
int flag;
};


struct lesser{
	bool operator()(const valI& a, const valI& b)
	{
		if(a.val > b.val ) return true;
		else if(a.val==b.val) return (a.flag>b.flag);
		else return false;
	}
};
int arr[100001];
int main()
{

	int T,n,l,r,f,i,j,k,m,cv,cnt,start;
	
	priority_queue<valI,vector<valI>,lesser> Q;
	cin >> T;
	valI temp,tempN;
	int arr2[100001];
	while(T--)
	{
		cin >> n >> m;
		for(i=0;i<n;i++)arr2[i]=0;
		
		for(i=0;i<n;i++)
		{
			cin >>arr[i];		
		}		
				
		for(i=0;i<m;i++)
		{
			int tempI;
			cin >> l >> r;
			if(l!=r)
			{
				temp.val=l-1;
				temp.flag=0;
				Q.push(temp);
				temp.val=r-1;
				temp.flag=1;
				Q.push(temp);
			}
		}
		
		cv=1;
		cnt=0;
		
		if(!Q.empty())	
		{
		temp=Q.top();
		start=temp.val;
		//cout << "Temp.val  " << temp.val << "  Temp.falg: " << temp.flag << endl;
		Q.pop();
		cnt++;
		}
		//cout << temp.val << endl;
		while(!Q.empty())
		{		
			//cout << "Hoiiiiiiiiii\n";
		    tempN=Q.top();
		   
			//cout << tempN .val << "  " << tempN.flag << endl;
			Q.pop();
			if(tempN.flag==0) cnt++;
			else cnt--;
			i=temp.val;
			j=tempN.val;
			
			// cout << "Temp.val  " << tempN.val << "  Temp.falg: " << tempN.flag << " cnt" << cnt<< endl;

		  // if(cnt==1 && temp.val<tempN.val)cv++;
		   if(cnt==0)
		   {
		   
		   	for(k=start;k<=j;k++)
			{
					arr2[k]=cv;
			}
		   	if(!Q.empty())
		   	{
		   		if(Q.top().val>tempN.val)cv++;
		   		start=Q.top().val;
		   	}
		   }
							
			temp=tempN;
		}	
		f=0;
		/*
		for(i=0;i<n;i++)
		{
			cout << arr2[i] << " " ;
		}
		cout << endl;
		*/
		for(i=0;i<n;i++)
		{
			if(arr2[i]==0) {
				if(arr[i]!=i+1)
				{
					f=1;break;
				}
			}
			else if(arr2[i]!=arr2[arr[i]-1]){f=1; break;}
		}
		
		if(f==1)
		{
			cout << "Impossible\n";
		}
		else
		{	
			cout << "Possible\n";
		}		
		
	}

	

	return 0;


}
