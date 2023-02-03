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
	int n, k;
	cin >> n >> k;
	int a[n + 5],b[n+5], ans = 0;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
		b[i]=a[i];
	}
	for (int i = 1; i < k ; ++i)
	{
		a[i+1] += a[i];
	}
	for (int i = k , j = 1; i < n; i++, j++)
	{
		ans=max(ans,a[i]);
		a[i+1]+=a[i]-b[j];
	}
	cout << max(ans,a[n]) << endl;
	return 0;
}

int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int test = 1, tc = 0;
	//Int(test);
	//cin >> test;
	while (test--) {
		//printf("Case %d: ", ++tc);
		solve();
	}
	return 0;
}