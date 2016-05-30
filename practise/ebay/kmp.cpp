#include<bits/stdc++.h>
using namespace std;

string str1,str2;
int fail[100];	
int len1,len2;
vector<int> occur;


void failure()
{
	int pre,i;
	pre=0;
	fail[0]=0;
	i=1;
	while(i<len2)
	{
		if(str2[i]==str2[pre])
		{
			fail[i]=++pre;	
			i++;			
		}
		else
		{
			if(pre==0)
			{
				fail[i]=0;
				i++;
			}
			else
			{
				pre=fail[pre-1];
			}				
		}
	}
	return ;
}

int match()
{
	int j=0,i=0;	
	while(j<len1)
	{		
		if(str1[j]==str2[i])
		{
			i++;
			j++;
		}	
		else
		{
			if(i!=0)
			i=fail[i-1];
			else
			{
				j++;
			}		
		}			
		if(i==len2)
		{
			occur.push_back(j-len2);
			i=fail[i-1];									
		}		
	}
	return 0;
}


int main()
{
	int len,i;
	cin >> str1 >> str2;	
	len1=str1.length();
	len2=str2.length();
	failure();
	match();
	cout << "Failure : \n";
	for(i=0;i<len2;i++)
	{
		cout << fail[i] << " ";
	}
	cout << endl;
	
	cout << "Matching Occurence :\n";
	for(i=0;i<occur.size();i++)
	{
		cout << occur[i] << " ";
	}
	cout << endl;
	return 0;
}



