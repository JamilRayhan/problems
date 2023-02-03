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
	int n, h, m;
	cin >> n >> h >> m;
	int time = 60 * h + m;
	int ans = 24 * 60;
	while (n--) {
		int hi, mi;
		cin >> hi >> mi;
		int x = (60 * hi) + mi - time;

		if (x < 0)
		{
			x += 24 * 60;
		}
		ans = min(ans, x);
	}
	cout << ans / 60 << " " << ans % 60 << endl;
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