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
	int x[4] , cnt = 0, cntz = 0, mx = -1, mn = 1000, ans = 0;
	for (int i = 0; i < 3; ++i)
	{
		cin >> x[i];
		if (x[i] == 1)
		{
			cnt++;
		}
		if (x[i] == 0)
		{
			cntz++;
		}
	}
	if (cnt == 3)
	{
		cout << 3 << endl;
		return 0;
	}
	if (cntz == 3)
	{
		cout << 0 << endl;
		return 0;
	}
	if (cntz == 2)
	{
		cout << 1 << endl;
		return 0;
	}
	sort(x, x + 3);
	ans += x[0];
	x[2] -= x[0];
	x[0] -= x[0];

	sort(x, x + 3);
	ans += x[1];
	x[2] -= x[1];
	x[1] -= x[1];

	if (x[2] > 0)
	{
		ans++;
	}
	if (cnt > ans)
	{
		cout << cnt << endl;
	}
	else
		cout << ans << endl;
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
