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
	int n, m, k, cnt = 0, x = 0, i = 0, j = 0;
	cin >> n >> m >> k;
	vector<int> a(n), b(m);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	for (int i = 0; i < m; ++i)
	{
		cin >> b[i];
	}
	sort(all(a));
	sort(all(b));
	while (i < n && j < m) {
		if (abs(a[i] - b[j]) <= k)
		{
			i++;
			j++;
			cnt++;
		}
		else {
			if (a[i] - b[i] > k) j++;
			else i++;
		}
	}
	cout << cnt << endl;
	return 0;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int test = 1, tc = 0;
	//Int(test);
	//cin >> test;
	while (test--) {
		//printf("Case %d: ", ++tc);
		solve();
	}
	return 0;
}