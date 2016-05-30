#include<iostream>
#include<set>
#include<queue>

using namespace std;
typedef struct node
{
	int val;
	int price;
}node;

typedef struct compa{
	bool operator()(const node& a ,const node&  b)
	{
		 
		 return a.val <=b.val ;
		// else return a.val < b.val ;	
	}
}compa;


typedef struct compa2{
	bool operator()(const int& a ,const int&  b)
	{
		 return a< b ;	
	}
}compa2;

int main()
{
	set<node,compa> Q;
	priority_queue<int, vector<int>,compa2> pq;
	pq.push(1);
	pq.push(1);
	
	cout << "Size" << pq.size() << endl;
	node temp;
	temp.val=1;
	temp.price=100;
	Q.insert(temp);
	temp.val =4;
	temp.price=200;
	Q.insert(temp);
	temp.val =3;
	temp.price=200;
	Q.insert(temp);
	temp.val =3;
	temp.price=300;

	Q.insert(temp);
	temp.price=300;

	//Q.erase(Q.find(temp));
	for(set<node,compa>::iterator it=Q.begin(); it!=Q.end() ;++it)
	{
		cout << it->val << " " << it->price << endl;
	}
	return 0;
}
