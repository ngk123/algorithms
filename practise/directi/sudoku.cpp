#include<bits/stdc++.h>
using namespace std;

vector<string> all;
string strc[5]={"","1","2","3","4"};
vector<int> sol[331779];
int arr[4][4];


int variance(int id)
{
	int var=0,i,j,temp;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			temp=(arr[i][j]-(all[sol[id][i]][j]-'0'));
			var+=temp*temp;
		}
	}
	return var;	
}

bool unequal(char a, char b,char c, char d)
{
	int visited[4]={0};
	int i;
	visited[a-'1']=1;
	visited[b-'1']=1;
	visited[c-'1']=1;
	visited[d-'1']=1;
	for(i=0;i<4;i++)
	{
		if(visited[i]==0)
		{
			return false;
		}
	}
	return true;
}

bool valid(int id1,int id2,int id3,int id4)
{
	string str2[4];
	int i;
	for(i=0;i<4;i++)
	{
		if(!unequal(all[id1][i],all[id2][i], all[id3][i],all[id4][i]))
		{
			return false;	
		}
			
	}
	
	if(!unequal(all[id1][0],all[id1][1],all[id2][0],all[id2][1]))
	{
		return false;
	}
	
	if(!unequal(all[id1][2],all[id1][3],all[id2][2],all[id2][3]))
	{
		return false;
	}
		
	if(!unequal(all[id3][2],all[id3][3],all[id4][2],all[id4][3]))
	{
		return false;
	}
	
	if(!unequal(all[id1][0],all[id1][1],all[id2][0],all[id2][1]))
	{
		return false;
	}	
	return true;
}


int main()
{
	int t,i,j,k,cnt,l,minv,temp;
	int visited[4][4];
	string str2;
	int ar[4]={1,2,3,4};
	char car[4];
	int var=0;
	string str3="1234";
	
	do{
		int num=0;
		ostringstream oss;
		for(i=0;i<4;i++)
		{
			num=num*10+ar[i];
		}
		oss << num;
		str2=oss.str();	
		all.push_back(str2);
		//cout << str2 << endl;
	}while(next_permutation(ar,ar+4));
	
	cnt=0;
	for(i=0;i<=23;i++)
	{
		for(j=0;j<=23;j++)
		{
			for(k=0;k<=23;k++)
			{
				for(l=0;l<=23;l++)			
				{
					//cout << "heyy\n";
				
					if(valid(i,j,k,l))
					{
						//cout << "hey";
						sol[cnt].push_back(i);
						sol[cnt].push_back(j);
						sol[cnt].push_back(k);
						sol[cnt].push_back(l);
						cnt++;
						
					}
				}			
			}		
		}	
	}	
	
	cout << cnt << endl;
	
	cin >> t;
	//cout << all[sol[0][0]] << " "<<	all[sol[0][1]] << " " <<all[sol[0][2]] << " "<< all[sol[0][3]] << endl;
	while(t--)
	{
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				cin >> arr[i][j];
			}
		}
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				cout << arr[i][j] << " " ;
			}
			cout << endl;
		}
		
		minv=100000;
		for(j=0;j<cnt;j++)
		{
			temp=variance(j);
			//cout << temp << endl;
			if(temp<minv)
			{
				minv=temp;
			}
			//break;
			if(minv==0) break;
		}
		cout << minv << endl;	
	}	
		return 0;
}

