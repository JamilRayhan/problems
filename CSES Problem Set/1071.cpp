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

ll solve() {
	ll x, y;
	cin >> x >> y;
	ll mx = max(x, y);
	if (mx % 2 == 0)
	{
		if (y == 1)
		{
			cout << mx*mx << endl;
		}
		else if (x >= y) {
			cout << mx*mx - (y - 1) << endl;
		}
		else if (mx > x) {
			cout << (mx - 1)*(mx - 1) + x << endl;
		}
	}
	else {
		if (x == 1)
		{
			cout << mx*mx << endl;
		}
		else if (y >= x)
		{
			cout << mx*mx - (x - 1) << endl;
		}
		else if (mx > y)
		{
			cout << (mx - 1)*(mx - 1) + y << endl;
		}
	}
	return 0;
}

int main() {
	//fast;
	int test = 1, tc = 0;
	//Int(test);
	cin >> test;
	while (test--) {
		//printf("Case %d: ", ++tc);
		solve();
	}
	return 0;
}