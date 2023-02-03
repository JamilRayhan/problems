#include<bits/stdc++.h>
using namespace std;

#define ll       long long
#define ull      unsigned ll
#define pii      pair<int, int>
#define pll      pair<ll, ll>
#define mp       make_pair
#define ff       first
#define ss       second
#define sz(x)    (int) x.size()
#define all(v)   v.begin(), v.end()
int solve() {
	int n;
	cin >> n;
	int a[n + 5], b[n + 5];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> b[i];
	}
	sort(a, a + n);
	sort(b, b + n);
	int j = 0, k = 0;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] != b[i])
		{
			a[i]++;
		}
	}


	sort(a, a + n);
	for (int i = 0; i < n; ++i)
	{
		if (a[i] != b[i])
		{
			cout << "NO" << endl;
			k = 1;
			break;
		}
	}
	if (k == 0)
	{
		cout << "YES" << endl;
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