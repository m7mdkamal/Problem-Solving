/*
 * Name : 152C - Pocket Book
 * Link : http://codeforces.com/problemset/problem/152/C
 */

#include <bits/stdc++.h>
using namespace std;

#define FOR(i, n) for (int i = 0; i < n; i++)
#define FORN(i, n) for (int i = 0; i <= n; i++)
typedef long long ll;


int main() {
	int n , m ;
	cin >> n >> m ;
	string str[n];
	set<char>s[m];
	FOR(i , n){
		cin >> str[i];
		FOR(j,m)
			s[j].insert(str[i][j]);
	}
	ll ans = 1 ;
	FOR(i,m){
		ans*=s[i].size();
		ans%=1000000007;
	}
	cout << ans;
	return 0;
}

