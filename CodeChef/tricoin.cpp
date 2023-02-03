#include<bits/stdc++.h>
using namespace std;

#define ll       long long
#define ull      unsigned ll
#define pii      pair<int, int>
#define pll      pair<ll, ll>
#define mp       make_pair
#define ff       first
#define ss       second
#define sz(x)    (int) x.size()
#define all(v)   v.begin(), v.end()
#define N 1000000009
#define as 509999

bool isOk(ll mid, ll n) {
	return (mid * (mid + 1)) / 2 <= n;
}
int solve() {
	ll n,ans=-1;
	cin >> n;
	int l = 0, r = 1e5;
	
	while (l <= r) {
		ll mid = (l + r) / 2;
		if (isOk(mid, n))
		{
			ans=max(mid,ans);
			l = mid + 1;
		}
		else {
			r = mid - 1;
		}
	}
	cout<<ans<<endl;
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