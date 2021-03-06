// by xcwgf666

#include <iostream>
#include <cassert>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

int n, m, k, i, j, ret, x, y, cl[100000 + 5];
vector<pair<int, int> > v[100000 + 5];
vector<int> d;

int main (int argc, char * const argv[]) {
	scanf("%d %d %d", &n, &m, &k);
	assert(1 <= n && n <= 100000);
	assert(1 <= m && m <= 100000);
	assert(1 <= k && k <= 100000);
	for(i = 1; i <= k; i++) {
		scanf("%d %d", &x, &y);
		assert(1 <= x && x <= n);
		assert(1 <= y && y <= m);
		v[x].push_back(make_pair(y, 1)); // we can solve all the rows independently / let's mark the y-th cell in the x-th row as the interesting one
		// and the adjacent cells as well (y - 1 and y + 1)
		if (y > 1) v[x].push_back(make_pair(y - 1, 0));
		if (y < m) v[x].push_back(make_pair(y + 1, 0));
	}
	for(i = 1; i <= n; i++) if (v[i].size()) {
		// 1 and m are interesting cells in each row as well
		// and now if there is a cell x such that a[x] > a[x + 1], then the both x and x + 1 are interesting cells
		v[i].push_back(make_pair(1, 0)); 
		v[i].push_back(make_pair(m, 0));
		// apply all the changes
		for(j = 0; j < v[i].size(); j++) cl[v[i][j].first] = v[i][j].first;
		for(j = 0; j < v[i].size(); j++) cl[v[i][j].first] += v[i][j].second;
		d.clear();
		for(j = 0; j < v[i].size(); j++) d.push_back(v[i][j].first);
		sort(d.begin(), d.end());
		d.resize(unique(d.begin(), d.end()) - d.begin());
		ret = 0;
		for(j = 1; j < d.size(); j++) { // checking as above
			ret += cl[d[j]] - cl[d[j - 1]];
			if (cl[d[j]] < cl[d[j - 1]]) { // if we have found something
				ret = -1;
				break;
			}
		}
		printf("%d\n", ret);
	} else printf("%d\n", m - 1);
    return 0;
}
