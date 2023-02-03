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
int N = 998244353;
int solve() {
	ll x;
	cin >> x;
	ll y = abs(x);
	ll d = y / N;
	if (y % N == 0)
	{
		cout << 0 << endl;
	}
	else if (x > 0)
	{
		cout << y % N << endl;
	}
	else {
		ll temp = N - y % N;
		cout << temp << endl;
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