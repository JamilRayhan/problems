#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
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
	int n, cnt = 0;
	cin >> n;
	string s, p;
	cin >> s >> p;
	for (int i = 0; i < n; ++i)
	{
		if (s[i] == 'R' || p[i] == 'R')
		{
			cnt = 1;
			break;
		}
	}
	if (cnt == 0)
	{
		cout << "Yes" << endl;
		return 0;
	}
	for (int i = 0; i < n; ++i)
	{
		if (s[i] == 'R') {
			if (p[i] == 'R')
			{
				continue;
			}
			else {
				cout << "NO" << endl;
				return 0;
			}
		}
		else if (p[i] == 'R') {
			cout << "NO" << endl;
			return 0;
		}

	}
	cout << "YES" << endl;
	return 0;
}

int main() {
	fast;
	int test = 1, tc = 0;
	//Int(test);
	cin >> test;
	while (test--) {
		//printf("Case %d: ", ++tc);
		solve();
	}
	return 0;
}