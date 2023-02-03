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
	int n, q,i,k;
	cin >> n>>q;
	vector<pair<int, int> >arr;

	for (i = 0 ; i < n ; i++) {
		// filling the original array
		cin >> k;
		arr.push_back (make_pair (k, i)); // k = value, i = original index
	}

	sort (arr.begin(), arr.end());

	for (i = 0 ; i < n ; i++) {
		cout << arr[i].first+1 << " " << arr[i].second+1 << "\n";
	}

	// while (q--) {
	// 	int x, k;
	// 	cin >> x >> k;
	// 	for (int i = 1; i <= n; ++i)
	// 	{
	// 		if (arr[i] == x)
	// 		{
	// 			k--;
	// 		}
	// 		if (k == 0)
	// 		{
	// 			cout << i << endl;
	// 			break;
	// 		}
	// 	}
	// 	if (k != 0)
	// 	{
	// 		cout << -1 << endl;
	// 	}
	// }
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