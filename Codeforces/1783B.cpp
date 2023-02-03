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
	vector<int> v;
	int a = 1, b = n * n;
	for (int i = 0; i < ((n * n) / 2) + 1; ++i)
	{
		v.pb(a);
		v.pb(b);
		a++;
		b--;
	}
	for (int i = 0; i < n; ++i)
	{
		if (i & 1)
		{
			for (int j = n * (i + 1)-1; j >= i * n ; j--)
			{
				cout << v[j] << " ";
			}
			cout<<endl;
		}
		else {
			for (int j = i*n; j < (i+1)*n; ++j)
			{
				cout << v[j] << " ";
			}cout<<endl;
		}

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