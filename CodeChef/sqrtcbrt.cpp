#include<bits/stdc++.h>
using namespace std;

#define ll      long long int
#define ull      unsigned ll
#define pii      pair<int, int>
#define pll      pair<ll, ll>
#define mp       make_pair
#define pb       push_back
#define gcd      __gcd
#define str_int  stoi
#define sz(x)    (int) x.size()
#define endl     "\n"
#define yes      cout<<"YES"<<endl;
#define no       cout<<"NO"<<endl;
#define all(v)   v.begin(), v.end()
#define mxv(v)   *max_element(v.begin(), v.end())
#define mnv(v)   *min_element(v.begin(), v.end())
const int MOD =  (int)1e9 + 7;

ll countSquares(ll n) {
	return (ll)sqrt(n);
}

ll countCubes(ll n) {
	return (ll)cbrt(n);
}

ll F(ll n) {
	return countSquares(n) - countCubes(n);
}

ll solve() {
	ll x;
	cin >> x;
	ll l = 1, r = x * 4;
	while (l + 1 < r)
	{
		ll mid = (l + r) / 2;
		ll p = F(mid * mid);
		if (p < x) l = mid;
		else r = mid;
	}
	cout << r*r << endl;
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