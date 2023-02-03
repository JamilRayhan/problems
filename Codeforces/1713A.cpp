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
	int n;
	cin >> n;
	std::vector<int> w(n + 1);
	std::vector<int> v(n + 1);
	v[0] = {0};
	w[0] = {0};
	for (int i = 1; i <= n; ++i)
	{
		cin >> v[i] >> w[i];
	}
	int a = *min_element(all(v));
	int b = *max_element(all(v));
	int c = *min_element(all(w));
	int d = *max_element(all(w));
	int ans = abs(a) + abs(b) + abs(c) + abs(d);
	cout << 2 * ans << endl;
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