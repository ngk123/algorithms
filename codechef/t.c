#include<stdio.h>

int main()
{
	long double ans;
	long long int a,b;
	scanf("%lld%lld",&a,&b);
	ans=(long double)a * b;
	printf("%Lf\n" ,ans);
	return 0;
}
