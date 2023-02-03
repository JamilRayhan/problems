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
	int n, x;
	cin >> n >> x;
	int ar[n + 5];
	for (int i = 1; i <= n; i++) {
		cin >> ar[i];
	}
	int min = ar[1];
	int max = ar[1];
	int ans = 0;
	for (int i = 2; i <= n; i++) {
		if (ar[i] > max) {
			max = ar[i];
		}
		if (ar[i] < min) {
			min = ar[i];
		}
		if (max - min > 2 * x) {
			ans++;
			min = max = ar[i];
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