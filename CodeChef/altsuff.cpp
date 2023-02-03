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
const int MOD = (int)1e9 + 7;

int solve() {
	int n, k;
	cin >> n >> k;
	string s, p;
	cin >> s;
	p = s;
	for (int i = 0; i < k; ++i)
	{
		if (s[i] == '1')
		{
			p[i] = '0';
		}

		if (s[i - 1] == '0' && i - 1 >= 0)
		{
			p[i] = '1';
		}

		if (s[i + 1] == '0' && i + 1 < n)
		{
			p[i] = '1';
		}
	}
	cout << s << endl;
	return 0;
}

int main() {

	int test = 1, tc = 0;
	//Int(test);
	cin >> test;
	while (test--) {
		//printf("Case %d: ", ++tc);
		solve();
	}
	return 0;
}