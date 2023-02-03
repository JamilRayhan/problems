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
	int n, k, cnt = 0;
	cin >> n >> k;
	string s;
	cin >> s;
	for (int i = 0; i < k; ++i)
	{
		if (s[i] == 'W')
		{
			cnt++;
		}
	}
	int ans = cnt; //cout << ans << endl;
	for (int i = k; i < n; ++i)
	{
		if (s[i] == 'W') cnt++;
		if (s[i - k] == 'W') cnt--;
		ans = min(ans, cnt);
	}
	cout << ans << endl;
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