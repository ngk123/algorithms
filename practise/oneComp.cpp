#include<iostream>
using namespace std;
int Fun(int x){
int C=0,y=x,i;
while (y){
++C; y=y>>1;
}
int N=(sizeof (int)) *8;
y=~x;
for ( i=0; i<(N-C); ++i) y=y<<1;
for ( i=0; i<(N-C); ++i) y=y>>1;
return (y);}

int main(){
int t=Fun(10);
cout<<t<<endl;
return 0;}
