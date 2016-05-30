#include<iostream>
#include<vector>
#include<queue>
#include<cstdio>
#include<cstdlib>

using namespace std;

class student
{
public:
  string name;
  int marks;
};


struct lessByMarks
{
  bool operator()(const student& a, const student& b)
  {
    return a.marks<b.marks;
  }
};


int main()
{
  priority_queue<int> maxH;
  priority_queue<int ,vector<int>, greater<int> > minH;
  priority_queue<student, vector<student>,lessByMarks> userHeap;
  
  student a,b,c,d,temp;
  a.name="nilesh";a.marks=100;
  b.name="Shub";b.marks=90;
  c.name="Shash";c.marks=80;
  d.name="MMM";d.marks=70;
    
  userHeap.push(d);
  userHeap.push(a);
  
  temp=userHeap.top();
  cout<<temp.name<<"   "<<temp.marks<<endl;

  userHeap.pop();
  cout<<userHeap.top().name<<"   "<<userHeap.top().marks<<endl;
  


  return 0;
}
