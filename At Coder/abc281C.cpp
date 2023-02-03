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

int main() {
	ll n, t, cnt = 0;
	cin >> n >> t;
	ll a[n + 5] = {0}, b[n + 5] = {0};
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
		b[i] = a[i];
		b[i] = b[i] + b[i - 1];
	}
	ll ans = 0, pos = 0; 
	if (t > cnt) {
		ans = t % cnt;
	}
	else {
		ans = cnt;
	}cout << ans;
	for (int i = 1; i <= n; ++i)
	{
		if (ans <= b[i])
		{
			pos = i;
			ans = b[i] - ans;
			break;
		}
	}
	cout << pos << " " << ans << endl;
	return 0;
}