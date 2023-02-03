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
	ll n, cnt = 0;
	cin >> n;
	multiset<ll>s;
	set<ll>p;
	ll a[n + 5];
	for (ll i = 0; i < n; ++i)
	{
		cin >> a[i];
		s.insert(a[i]);
		p.insert(a[i]);
	}
	for (auto x = p.begin(); x != p.end(); x++)
	{
		//cout << s.count(*x) << " ";
		if (s.count(*x) > 1)
		{
			ll temp = s.count(*x);
			cnt += (temp - 1) * (temp) / 2;
		}
	}
	cout << cnt << endl;
	//cnt+=(s.count(a[i])-1)*((s.count(a[i])-1)-1)/2;
	return 0;
}

int main() {
	//fast;
	int test = 1, tc = 0;
	//Int(test);
	cin >> test;
	while (test--) {
		//printf("Case %d: ", ++tc);
		solve();
	}
	return 0;
}