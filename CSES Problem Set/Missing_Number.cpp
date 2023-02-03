#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
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
	int arr[n + 5] = {0};
	for (int i = 1; i < n; ++i)
	{
		int x;
		cin >> x;
		arr[x] = 1;
	}
	for (int i = 1; i <= n; ++i)
	{
		if (arr[i] == 0)
		{
			cout << i << endl;
			return 0;
		}
	}

	return 0;
}

int main() {
	fast;
	int test = 1, tc = 0;
	//Int(test);
	//cin >> test;
	while (test--) {
		//printf("Case %d: ", ++tc);
		solve();
	}
	return 0;
}