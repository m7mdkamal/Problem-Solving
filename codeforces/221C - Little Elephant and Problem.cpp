/*
 * Name : 221C - Little Elephant and Problem
 * Link : http://codeforces.com/problemset/problem/221/C
 */

#include <bits/stdc++.h>
using namespace std;

#define FOR(i, n) for (int i = 0; i < (int)n; i++)
#define FORN(i, n) for (int i = 0; i <= (int)n; i++)
#define ALL(x) x.begin(),x.end()
typedef long long ll;

int main() {
	int n;
	cin >> n;
	int a[n],b[n];
	FOR(i,n)
		cin >> a[i];
	memcpy(b,a,sizeof a);
	sort(a, a + n);
	int c = 0;
	FOR(i,n)
		if (a[i] != b[i])
			c++;
	if (c == 2 || c == 0)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;
}

