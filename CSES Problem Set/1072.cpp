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
int solve(ll n) {
	ll ans = (n * n * (n * n - 1) / 2) - (4 * (n - 1) * (n - 2));
	cout << ans << endl;

	return 0;
}

int main() {
	fast;
	int test = 1, tc = 0;
	//Int(test);
	cin >> test;
	for (int i = 1; i <= test; ++i)
	{
		solve(i);
	}
	return 0;
}