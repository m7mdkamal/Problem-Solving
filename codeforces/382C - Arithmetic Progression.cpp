/*
 * Name : 382C - Arithmetic Progression
 * Link : http://codeforces.com/problemset/problem/382/C
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
	int a[n];
	FOR(i,n)
		cin >> a[i];
	sort(a, a + n);
	set<int> ans;
	if (n == 2) {
		if ((a[0] + a[1]) % 2 == 0) {
			ans.insert(a[0] - a[1] + a[0]);
			ans.insert((a[0] + a[1]) / 2);
			ans.insert(a[1] + a[1] - a[0]);
		} else {
			ans.insert(a[0] - a[1] + a[0]);
			ans.insert(a[1] + a[1] - a[0]);
		}
	} else {
		int arr[n - 1];
		FOR(i,n-1)
		{
			arr[i] = a[i + 1] - a[i];
		}
		sort(arr, arr + n - 1);
		if (arr[0] == arr[n - 2]) {
			ans.insert(a[0] - arr[0]);
			ans.insert(a[n - 1] + arr[0]);

		} else {
			int c = count(arr, arr + n - 1, arr[0]);
			if (c == n - 2 && arr[0]*2 ==arr[n-2]) {

				FOR(i,n-1)
				{
					if (a[i + 1] - a[i] != arr[0]) {
						ans.insert(a[i] + arr[0]);
						break;
					}
				}
			} else {
			}
		}
	}
	if (ans.empty() && n == 1) {
		cout << -1 << endl;
	} else if (ans.empty() && n > 2) {
		cout << 0 << endl;
	} else {
		cout << ans.size() << endl;
		for( set<int>::iterator it = ans.begin() ; it!=ans.end() ; it++)
		{
			cout << *it << " ";
		}
	}
	return 0;
}

