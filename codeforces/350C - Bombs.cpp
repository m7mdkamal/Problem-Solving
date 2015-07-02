/*
 * Name : 350C - Bombs
 * Link : http://codeforces.com/problemset/problem/350/C
 */

#include <bits/stdc++.h>
using namespace std;

#define FOR(i, n) for (int i = 0; i < (int)n; i++)
#define FORN(i, n) for (int i = 0; i <= (int)n; i++)
#define ALL(x) x.begin(),x.end()
typedef long long ll;

bool sortBy(pair<int, int> x, pair<int, int> y) {
	if (abs(x.first) + abs(x.second) < abs(y.first) + abs(y.second)) {
		return true;
	}
	return false;
}

pair<int, int> arr[100007];
int main() {
	int n;
	cin >> n;

	ll steps = 0;
	FOR(i,n)
	{
		scanf("%d %d", &arr[i].second, &arr[i].first);
		if (arr[i].first != 0)
			steps += 2;
		if (arr[i].second != 0)
			steps += 2;
		steps += 2;
	}
	sort(arr, arr + n, sortBy);
	cout << steps << endl;
	FOR(i,n)
	{
		pair<int, int> &p = arr[i];

		if (p.second > 0) {
			printf("1 %d R\n",p.second);
		} else if (p.second < 0) {
			printf("1 %d L\n",-1*p.second);
		}
		if (p.first > 0) {
			printf("1 %d U\n",p.first);
		} else if (p.first < 0) {
			printf("1 %d D\n",-1*p.first);
		}
		cout << 2 << endl;
		if (p.second > 0) {
			printf("1 %d L\n",p.second);
		} else if (p.second < 0) {
			printf("1 %d R\n",-1*p.second);
		}
		if (p.first > 0) {
			printf("1 %d D\n",p.first);
		} else if (p.first < 0) {
			printf("1 %d U\n",-1*p.first);
		}
		cout << 3 << endl;
	}

	return 0;
}

