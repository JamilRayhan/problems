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
	ll n, k, b, s;
	cin >> n >> k >> b >> s;
	vector<ll> v(n);
	v[0] = k * b;
	s -= v[0];
	if (s < 0) cout << -1 << endl;
	else {
		for (int i = 0; i < n; ++i)
		{
			ll temp = min(k - 1, s);
			v[i] += temp;
			s -= temp;
		}
		if (s > 0) cout << -1 << endl;
		else
		{
			for (int i = 0; i < n; ++i)
			{
				cout << v[i] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}

int main() {
	fast;
	ll test ;
	//Int(test);
	cin >> test;
	while (test--) {
		//printf("Case %d: ", ++tc);
		solve();
	}
	return 0;
}