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
	ll int n, m, x = 0;
	cin >> n >> m;
	ll int arr[n + 5], a[n + 5] = {0}, b[n + 5] = {0};
	for (ll int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	for (ll int i = 0; i < n - 1; ++i)
	{
		a[i + 1] = max(x, arr[i] - arr[i + 1]);
		b[i + 1] = max(x, arr[i + 1] - arr[i]);
	}

	for (ll int i = 0; i < n - 1; ++i)
	{
		a[i + 1] += a[i];
		b[i + 1] += b[i];
	}
	// for (int i = 0; i < n; ++i)
	// {
	// 	cout << a[i] << " " << b[i] << endl;
	// }
	while (m--) {
		int s, t;
		cin >> s >> t;
		if (s < t)
		{
			cout << a[t - 1] - a[s - 1] << endl;
		}
		else {
			cout << b[s - 1] - b[t - 1]  << endl;
		}
	}
	return 0;
}

int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int test = 1, tc = 0;
	//Int(test);
	//cin >> test;
	while (test--) {
		//printf("Case %d: ", ++tc);
		solve();
	}
	return 0;
}