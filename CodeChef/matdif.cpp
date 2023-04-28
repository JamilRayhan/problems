#include<bits/stdc++.h>
using namespace std;

#define ll           long long int
#define ull          unsigned ll
#define pii          pair<int, int>
#define pll          pair<ll, ll>
#define mp           make_pair
#define pb           push_back
#define gcd          __gcd
#define str_int      stoi
#define sz(x)        (int) x.size()
#define endl         "\n"
#define yes          cout<<"YES"<<endl
#define no           cout<<"NO"<<endl
#define all(v)       v.begin(), v.end()
#define mxv(v)       *max_element(all(v))
#define mnv(v)       *min_element(all(v))
#define sumv(v)      accumulate(all(v), 0)
#define cntv(v,e)    count(all(v), e)
#define rev(v)       reverse(all(v))

const int   MOD =   (int)1e9 + 7;
const double pi =   3.14159265359;

int solve() {
	int n, nn;
	cin >> n;
	nn = ((n * n) / 2);
	vector<int> v;
	if (n & 1)
	{
		for (int i = 0, x = 1; i < nn + 1; ++i)
		{
			v.push_back(x);
			x += 2;
		}
	}
	else {
		for (int i = 0, x = 1; i < nn; ++i)
		{
			v.push_back(x);
			x += 2;
		}
	}
	for (int i = 0, x = 2; i < nn; ++i)
	{
		v.push_back(x);
		x += 2;
	}
	int j=0,m=n;
	for (int i = 0; i < n; ++i)
	{
		for (  ; j < m; ++j)
		{
			cout<<v[j]<<" ";
		}cout<<endl;
		m+=n;
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