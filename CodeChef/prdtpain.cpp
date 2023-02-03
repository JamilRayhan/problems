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
	ll int n;
	cin >> n;
	vector<ll int>arr(n);
	for (auto &x:arr) cin>>x;
	ll int ans = 0;
	for (ll int i = 0; i < n; ++i)
	{
		for (ll int k = i + 2; k < n; k++) {
			auto f = [&](int j) {
				return (arr[i] - arr[j]) * (arr[j] - arr[k]);
			};
			ll int j = upper_bound(arr.begin() + i, arr.begin() + k, (arr[i] + arr[k]) / 2) - arr.begin();
			j = min(j, k - 1);
			ans += max(f(j), f(j - 1));
		}
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