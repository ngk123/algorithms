#include<bits/stdc++.h>

using namespace std;


int main()
{
	int k,len,i,cnt=0,maxId,j,rK,swapNeeded,last,l,flag;
	string str;
	char temp,maxm;

	cin >> str >> k;
	len=str.length();
	rK=k;
	for(i=0;i<len;i++)
	{
		maxm=(int)str[i];
		maxId=i;
		if(rK==0) break;	
		for(j=i+1;j<len;j++)
		{		
			if((int)str[j]>(int)maxm)
			{
				maxm=str[j];
				maxId=j;	
			}
		}
		
		swapNeeded=maxId-i;
//		cout << "Swap Needed " << swapNeeded << endl;
		if(rK>=swapNeeded) 
		{
			//cout << "Yo\n";
			temp=str[maxId];
			for(l=maxId;l>i;l--)
			{
				str[l]=str[l-1];
			}	
			
			str[i]=temp;
			rK-=swapNeeded;
		}
		
		else
		{
			last=len;
			flag=0;
			while(1)
			{
				last--;			
				
				if(flag==1 || last==i)break;
				maxm=(int)str[i];
				maxId=i;
				for(j=i+1;j<last;j++)
				{		
					if((int)str[j]>(int)maxm)
					{
						maxm=str[j];
						maxId=j;	
					}
				}
				swapNeeded=maxId-i;
		
				if(rK>=swapNeeded) 
				{
					temp=str[maxId];
					for(l=maxId;l>i;l--)
					{
						str[l]=str[l-1];
					}
			
					str[i]=temp;
					rK-=swapNeeded;
					flag=1;
				}			
				
			}	
		
		}
		
	}
	
	cout << str << endl;
	

	return 0;
}

