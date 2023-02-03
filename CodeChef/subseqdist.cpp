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
	double n, mx = 0;
	cin >> n;
	multiset<double>m;
	set<double>s;
	for (int i = 0; i < n; ++i)
	{
		int a;
		cin >> a;
		s.insert(a);
		m.insert(a);
	}
	for (auto x : s) {
		if (m.count(x) > 1)
		{
			mx += log2(x);
		}
	};
	cout << ceil(mx) << endl;
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