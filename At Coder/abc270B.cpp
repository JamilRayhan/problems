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
	int x, y, z;
	cin >> x >> y >> z;

	if (y < 0) {
		x = -x;
		y = -y;
		z = -z;
	}

	if (x < y) {
		cout << abs(x) << endl;;
	} else {
		if (z > y) {
			cout << "-1" << endl;
		} else {
			cout << abs(z) + abs(x - z) << endl;
		}
	}
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

