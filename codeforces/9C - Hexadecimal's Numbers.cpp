/*
 * Name : C - Hexadecimal's Numbers
 * Link : http://codeforces.com/contest/9/problem/C
 */

#include <bits/stdc++.h>
using namespace std;

#define FOR(i, n) for (int i = 0; i < n; i++)
#define FORN(i, n) for (int i = 0; i <= n; i++)
typedef long long ll;

ll n;
int solve(ll i) {
	if (i > n)
		return -1;
	int ret = 0;
	ret += solve(i * 10) + 1;
	ret += solve(i * 10 + 1) + 1;
	return ret;
}
int main() {
	cin >> n;
	cout << solve(1)+1;
	return 0;
}

