#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[]={10,8,6,4,3};
	int r[]={0,-1,2,3,4};
	int newa[5];
	int count=0,i,max,n=5,j;
	for(i=0;i<n;i++)
	{
		newa[i]=-1;
	}
	for(i=0;i<n;i++)
	{
		if(r[i]>-1)
		{
			max=-1;
			for (j=r[i]+1;j<n;j++)
			{
				if(newa[j]>max)
				max=newa[j];
			}
			if(max!=-1)
			{
				newa[r[i]]=max+1;
				count=count+newa[r[i]]-a[i];
			}
			else
			{
				newa[r[i]]=a[i];
			}
			for(j=0;j<r[i];j++)
			{
				if(newa[j]<newa[r[i]] && newa[j]!=-1)
				{
				count=count+newa[r[i]]-newa[j];
				//cout << "incrementing " << newa[r[i]] << " " << newa[j] << endl;
				newa[j]=newa[r[i]];
				}	
			}
		}
	}
	//cout <<count<< endl;

	j=0;
	int k;
	for(i=0;i<n;i++)
	{
	if(newa[i]==-1)
	{
	while(r[j]!=-1)
	j++;
	max=0;
	for(k=0;k<j;k++)
	{
	if(r[k]>-1 && r[k] < i && a[k]==a[j])
	max=1;
	}
	if(max==0)
	{
	cout << "here"<< endl;
	int m=-1;
	for(k=i;k<n;k++)
	{
	if(newa[k]>m)
	m=newa[k];
	}
	if(m==-1)
	newa[i]=a[j];
	else
	{
	if(a[j]<max)
	{
	newa[i]=m+1;
	count=count+newa[i]-a[j];
	}
	else
	newa[i]=a[j];
	int l;
	for(l=0;l<i;l++)
	{
	if(newa[l]<newa[i])
	{
	count=count+newa[i]+1-newa[l];
	newa[l]=newa[i]+1;
	}
	}
	}
	}
	else
	{
	newa[i]=a[j]+1;
	count=count+1;
	}
	}
	}
	cout <<count<< endl;
	for(i=0;i<n;i++)
	{
	cout << newa[i]<<endl;
	}
	return 0;
}
