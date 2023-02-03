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
	int n, mx = 0;
	cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	if (n == 1)
	{
		cout << 0 << endl;
		return 0;
	}
	for (int i = 1; i < n; i++)
	{
		mx = max(mx, v[i - 1] - v[i]);

	}
	for (int i = 0; i < n ; ++i)
	{
		mx = max(mx, v[n - 1] - v[i]);
	}
	for (int i = 1; i < n; ++i)
	{
		mx = max(mx, v[i] - v[0]);
	}
	cout << mx << endl;
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