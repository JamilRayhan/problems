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
	int n;
	cin >> n;
	if (n == 3)
	{
		no
		return 0;
	}
	yes
	if (n & 1)
	{
		int x=n/2;
		for (int i = 0; i < n / 2; ++i)
		{
			cout << x-1 << " " << -x << " ";
		}
		cout << x-1 << endl;
	}
	else {
		for (int i = 0; i < n / 2; ++i)
		{
			cout << 1 << " " << -1 << " ";
		}
		cout << endl;
	}
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