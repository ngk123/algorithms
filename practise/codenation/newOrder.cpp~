#include<bits/stdc++.h>
using namespace std;
#define pb push_back 
stack<int> S;
int edge[27][27];
int len[101];
string strarr[100009];
int maxLen=-1;
vector<int> root;
int present[30];
int visited[30];
int countI[30];
int n;
int topological()
{
	int i,flag,temp,j;	
	vector<int>::iterator it;
	for(i=0;i<30;i++)
	{
		if(countI[i]==0 && present[i]==1)
		{
			root.pb(i);
			present[i]=0;
		}
	}
	while(1)
	{						
		if(root.empty()) break;				
		for(it=root.begin();it!=root.end();++it)
		{
			temp=*(it);	
			cout << (char)(temp+97);
			
			for(j=0;j<26;j++)
			{
				if(edge[temp][j]==1 && countI[j]>0)
				{
					countI[j]--;					
				}
			}			
		}
		cout << endl;
		root.clear();
		for(i=0;i<30;i++)
		{
			if(countI[i]==0 && present[i]==1)
			{
				root.pb(i);
				present[i]=0;
			}
		}
	}	
	return 0;	
}

int formEdges(int start,int end,int pos)
{	
	int nstart,nend,i;
	if(start==end){return 0;}
	nstart=start;
	for(i=start;i<end;i++)
	{		
		if(len[i]>pos && len[i+1]>pos && strarr[i][pos]!=strarr[i+1][pos])
		{
			nend=i;
			edge[strarr[i][pos]-'a'][strarr[i+1][pos]-'a']=1;
			countI[strarr[i+1][pos]-'a']++;
			if(pos+1<maxLen)
			{
				formEdges(nstart,nend,pos+1);
			}
			nstart=i+1;			
		}				
	}
	if(pos+1<maxLen)
	{
		formEdges(nstart,end,pos+1);
	}
	return 0;
}

int formEdge2()
{
	int id1,id2,i;
	for(i=0;i<n-1;i++)
	{		
		id1=0;
		id2=0;	
		while(1)
		{
			
			if(len[i]>id1 && len[i+1]>id1)
			{
				if(strarr[i][id1]!=strarr[i+1][id1])
				{
					if(edge[strarr[i][id1]-'a'][strarr[i+1][id1]-'a']==0)
					{					
						edge[strarr[i][id1]-'a'][strarr[i+1][id1]-'a']=1;
						countI[strarr[i+1][id1]-'a']++;
					}
						break;					
					
				}	
				else
				{
					id1++;
				}		
			}
			else
			{
				break;
			}
		
		}
	}
	
	return 0;
}


int main()
{	
	int i,j;
	cin >> n;		
	for(i=0;i<n;i++)
	{
		cin >> strarr[i];	
		len[i]=strarr[i].length();
		for(j=0;j<len[i];j++)
		{
			present[strarr[i][j]-'a']=1;
		}		
		if(len[i]>maxLen)maxLen=len[i];
	}	
	//formEdges(0,n-1,0);
	formEdge2();
		
	/*
	for(i=0;i<6 ;i++)
	{
		cout << (char)(i+97) << " : ";
		for(j=0;j<26;j++)
		{
			cout << edge[i][j] << " ";
		}
		cout << endl;	
	}	
	*/
	topological();	
	return 0;
}
