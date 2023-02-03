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
	int n;
	cin >> n;
	map<string, int> map;
	string s[3][n];
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < n; j++) {
			cin >> s[i][j];
			map[s[i][j]]++;
		}
	}
	for (int i = 0; i < 3; ++i)
	{
		int ans = 0;
		for (int j = 0; j < n; j++) {
			if (map[s[i][j]] == 1)
			{
				ans += 3;   			/* code */
			}
			else if (map[s[i][j]] == 2)
			{
				ans++;
			}
		}
		cout << ans << " ";
	}
	cout << endl;

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