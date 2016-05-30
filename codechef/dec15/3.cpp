#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;

typedef struct{
int A;
int B;
float C;
} line;

struct comp {
	bool operator()(const line &l1, const line &l2) {
		if(l1.A==l2.A) return (l1.B < l2.B);
		return (l1.A < l2.A);
	}
};

int gcd(int s,int l);

int main()
{
	vector<line> lines;
	int t,n,a,b,s,l,i,Gcd,maxS,tempA,tempB;	
	line temp;
	
	float c;
	
	set<float> tempS;	
	
	cin >> t;
	
	while(t--)
	{
		cin >> n;
		for(i=0;i<n;i++)
		{
			cin >> a >> b >> c;			
			tempA=abs(a);
			tempB=abs(b);
			s=min(tempA,tempB);
			l=max(tempA,tempB);
			Gcd= gcd(s,l); 			
			
			if(a<0)
			{
				a=-a;
				b=-b;
				c=-c;
			}
			else if(a==0 && b<0)
			{
				b=-b; c=-c;			
			}
			
			temp.A=a/Gcd;
			temp.B=b/Gcd;
			temp.C=(float)c/Gcd;					
			lines.push_back(temp);					
		}
		
		sort(lines.begin(),lines.end(),comp());
		i=0;
		maxS=1;
		
		tempS.insert(lines[i].C);
		
		for(i=1;i<n;i++)
		{
			if(lines[i].A==lines[i-1].A && lines[i].B==lines[i-1].B)
			{
				tempS.insert(lines[i].C);
			}
			else
			{
				if(maxS<tempS.size()) maxS=tempS.size();
				tempS.clear();
				tempS.insert(lines[i].C);	
			}						
		}
		
		if(maxS<tempS.size()) maxS=tempS.size();		
		cout << maxS << endl;	
		lines.clear();
		tempS.clear();	
	}	
	return 0;
}

int gcd(int s,int l)
{	
	int rem;
	if(s==0) return l;	
	rem=l%s;	
	l=s;
	s=rem;	
	return gcd(s,l);
}


