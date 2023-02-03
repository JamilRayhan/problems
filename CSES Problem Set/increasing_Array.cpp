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
	ll int n;
	cin >> n;
	ll int a[n + 5], b[n + 5];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		b[i] = a[i];
	}
	for (int i = 0; i < n ; ++i)
	{
		if (b[i + 1] < b[i])
		{
			b[i + 1] = b[i];
		}
	}
	ll int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		ans += b[i] - a[i];
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