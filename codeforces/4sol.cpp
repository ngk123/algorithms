#include <cstdio>
#include <map>
#include<iostream>
using namespace std;
map<int, int> m, mb;
int b[1000100];
int a[1000100];
void add(int p, int x) {
	while (p < 1000100) {
		b[p] += x;
		p += p;// & -p;
		//cout << p << endl;
	}
	//cout << endl;
}
int sum(int p) {
	int res = 0;
	while (p > 0) {
		res += b[p];
		p -= p & -p;
		cout << p << endl;
	}
	cout << endl;
	return res;
}
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++) {
		m[a[i]]++;
		add(m[a[i]], 1);
	}
	long long int ans = 0;
	for (int i = n - 1; i >= 0; i--) {
		add(m[a[i]], -1);
		m[a[i]]--;
		mb[a[i]]++;
		ans += sum(n) - sum(mb[a[i]]);
	}
	printf("%lld\n", ans);
	return 0;
}
