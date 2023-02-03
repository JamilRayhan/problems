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
	int n, j = 0;
	cin >> n;
	string s;
	cin >> s;
	sort(all(s), greater<int>());
	int plus = 0, minus = 0;
	while (s.back() == '+') {
		plus++;
		s.pop_back();
	}
	while (s.back() == '-') {
		minus++;
		s.pop_back();
	}

	string ans;
	while (!s.empty()) {
		ans += s.back();
		s.pop_back();
		if (minus > 0)
		{
			minus--;
			ans += '-';
		}
		else if (plus > 0) {
			plus--;
			ans += '+';
		}
	}
	reverse(all(ans));
	cout << ans << endl;
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