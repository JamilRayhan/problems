#include<bits/stdc++.h>
using namespace std;

#define ll       long long
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

int solve() {
	ll n, cnt = 0;
	cin >> n;
	ll a[n + 5];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		cnt += a[i];
	}
	
	if (cnt % 2 == 0)
	{
		cout << 0 << endl;
		return 0;
	}
	ll nw =0;
	ll ans=21;
	for (int i = 0; i < n; ++i)
	{
		ll cur=a[i];
		while(!((cur+a[i])&1)){
			nw++;
			cur/=2;
		}
		ans=min(ans,nw);
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