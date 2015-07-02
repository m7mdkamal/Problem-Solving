/*
 * Name : 339C - Xenia and Weights
 * Link : http://codeforces.com/problemset/problem/339/C
 */

#include <bits/stdc++.h>
using namespace std;

#define FOR(i, n) for (int i = 0; i < (int)n; i++)
#define FORN(i, n) for (int i = 0; i <= (int)n; i++)
#define ALL(x) x.begin(),x.end()
typedef long long ll;

int main() {
	string str;
	int m;
	cin >> str >> m;
	vector<int> numbers;
	FOR(i , 10 )
		if (str[i] == '1')
			numbers.push_back(i + 1);


	vector<int> ansVec;
	int x = m ;
	do {
		int left = 0, right = 0, last = -1;
		bool f = 0;
		m = x;
		while (m--) {
			f = !f;
			int add = 0;
			FOR(i,numbers.size())
			{
				if (numbers[i] == last)
					continue;
				if (f) {
					if (left + numbers[i] > right) {
						add = numbers[i];
						break;
					}

				} else {
					if (right + numbers[i] > left) {
						add = numbers[i];
						break;
					}
				}
			}
			if (add == 0)
				break;
			if (f)
				left += add;
			else
				right += add;
			ansVec.push_back(add);
			last = add;
		}
		if(m<0) break;
		ansVec.clear();
	} while (next_permutation(ALL(numbers)));
	if (m >= 0) {
		cout << "NO" << endl;
	} else {
		cout << "YES" << endl;
		FOR(i,ansVec.size())
			cout << ansVec[i] << " ";
	}
	return 0;
}

