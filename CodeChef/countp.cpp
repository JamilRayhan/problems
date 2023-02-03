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
	ll n, s1 = 0, s2 = 0;
	bool a = false;
	cin >> n;
	while (n--) {
		int x;
		cin >> x;
		if (x & 1) {
			if (a)
				a = false;
			else
				a = true;
		}
		if (a)
		{
			s1 += x;
		}
		else
			s2 += x;
	}
	s1%=10;
	s2%=10;
	if ((s1*s2)%2!=0)
	{
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