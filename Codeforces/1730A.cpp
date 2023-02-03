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
	int n, c, cnt = 0;
	cin >> n >> c;
	std::vector<int> v(n);
	multiset<int>m;
	set<int>s;
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
		s.insert(v[i]);
		m.insert(v[i]);
	}
	for (auto x : s)
	{

		if (m.count(x) > c)
		{
			cnt += c;
		}
		else
			cnt += m.count(x) ;
	}
	cout << min(n, cnt) << endl;
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