#include<bits/stdc++.h>
using namespace std;

#define ll       long long
#define ull      unsigned ll
#define pii      pair<int, int>
#define pll      pair<ll, ll>
#define mp       make_pair
#define ff       first
#define ss       second
#define sz(x)    (int) x.size()
#define all(v)   v.begin(), v.end()
int solve() {
	string s;
	cin >> s;
	int cA = 0, cB = 0, cC = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'A') {
			cA = cA + 1;
		}
		else if (s[i] == 'B') {
			cB = cB + 1;
		}
		else {
			cC = cC + 1;
		}
	}
	if (cB - (cA + cC) == 0) {
		cout << "YES" << endl;
	}
	else
		cout << "NO" << endl;
	return 0;
}

int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int test = 1, tc = 0;
	//Int(test);
	cin >> test;
	while (test--) {
		//printf("Case %d: ", ++tc);
		solve();
	}
	return 0;
}