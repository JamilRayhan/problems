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
	ll n, sum = 0 , ans = INT_MAX;
	cin >> n;
	ll arr[n + 5];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	for (ll i = 0; i < 1 << n; i++) {
		ll s = 0;
		for (ll j = 0; j < n; j++) {
			if (i & 1 << j) s += arr[j];
		}
		ll curr = abs((sum - s) - s);
		ans = min(ans, curr);
	}
	cout << ans << endl;
	return 0;
}

int main() {
	fast;
	int test = 1, tc = 0;
	//Int(test);
	//cin >> test;
	while (test--) {
		//printf("Case %d: ", ++tc);
		solve();
	}
	return 0;
}