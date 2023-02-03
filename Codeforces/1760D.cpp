#include<bits/stdc++.h>
using namespace std;

#define ll       long long int
#define ull      unsigned ll
#define pii      pair<int, int>
#define pll      pair<ll, ll>
#define mp       make_pair
#define pb       push_back
#define gcd      _gcd
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
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		if (i == 0 || x != v.back())
		{
			v.pb(x);
		}
	}
	int vally = 0;
	for (int i = 0; i < sz(v); ++i)
	{
		if ((i == 0 || v[i - 1] > v[i]) && ((i == sz(v) - 1) || v[i] < v[i + 1]))
		{
			vally++;
		}
	}
	if (vally == 1) {
		yes;
	}
	else no;
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