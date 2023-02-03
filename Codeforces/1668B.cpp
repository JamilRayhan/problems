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
	ll int n, m;
	cin >> n >> m;
	ll int arr[n + 5];
	ll int s = 0, minv = 1e9, maxv = 0;
	for (int i = 1; i <= n; ++i)
	{
		cin >> arr[i];
		s += arr[i];
		minv = min(minv, arr[i]);
		maxv = max(maxv, arr[i]);
	}
	if ((n + s - minv + maxv) <= m)
	{
		cout << "Yes" << endl;
	}
	else
		cout << "No" << endl;
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