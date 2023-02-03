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
	double a, x, b, y;
	cin >> a >> x >> b >> y;
	double al = a / x;
	double bo = b / y;
	if (al == bo)
	{
		cout << "EQUAL" << endl;
	}
	else {
		string ans = (al > bo) ? "Alice" : "Bob";
		cout << ans << endl;
	}
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