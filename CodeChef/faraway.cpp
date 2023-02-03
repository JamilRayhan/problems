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
ll int solve() {
	ll int n, m, cnt = 0;
	cin >> n >> m;
	ll int a[n + 5], b[n + 5] = {0};
	for (ll int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	ll int temp = m / 2 + 1;
	for (ll int i = 0; i < n; ++i)
	{
		if (a[i] >= temp)
		{
			cnt += a[i] - 1;
		}
		else {
			cnt += m - a[i];
		}
	}
	cout << cnt << endl;
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