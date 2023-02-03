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
	ll int n, suma = 0, sumb = 0, x = 0, y = 0;
	cin >> n;
	ll int a[n + 5], b[n + 5];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		suma += a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> b[i];
		sumb += b[i];
	}
	if (sumb != suma)
	{
		cout << -1 << endl;
		return 0;
	}
	ll d = 0;
	for (int i = 0; i < n; ++i)
	{
		x += max(d, b[i] - a[i]);
		y += max(d, a[i] - b[i]);
	}
	cout << max(x, y) << endl;
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