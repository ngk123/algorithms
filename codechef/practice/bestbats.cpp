#include<iostream>

using namespace std;
int main()
{
	int T,K,k,j,i,a,temp,l,runs[12];
	cin >> T;
	for(i=0;i<T;i++)
	{
		int score[12][1111]={0};
		for(k=0;k<11;k++)
		{
			cin >> runs[k];
		}
		cin>>K;
		for(k=0;k<11;k++)
		{
			a=runs[k];
			temp=1110-a;
			for(j=temp;j>0;j--)
			{
				for(l=0;l<12;l++)
				{
				  if(score[l][j]!=0)score[l+1][j+a]+=score[l][j];
				}
			}
			score[1][a]+=1;			
		}
		for(k=1110;k>0;k--)
		{
			if(score[K][k]!=0){cout<<score[K][k]<<endl ; break;}
		}
		
	}


}
