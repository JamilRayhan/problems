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
	int n, m;
	cin >> n >> m;
	int arr[n][m ];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int temp = 0;
			int ci = i, cj = j;
			while (ci >= 0 && ci < n && cj >= 0  && cj < m) {
				temp += arr[ci][cj];
				ci--;
				cj--;
			}
			ci = i, cj = j;
			while (ci >= 0 && cj >= 0 && ci < n && cj < m) {
				temp += arr[ci][cj];
				ci++;
				cj--;
			}
			ci = i, cj = j;
			while (ci >= 0 && cj >= 0 && ci < n && cj < m) {
				temp += arr[ci][cj];
				ci--;
				cj++;
			}
			ci = i, cj = j;
			while (ci >= 0 && cj >= 0 && ci < n && cj < m) {
				temp += arr[ci][cj];
				ci++;
				cj++;
			}
			temp -= (arr[i][j] * 3);
			ans = max(ans, temp);
		}

	}
	cout << ans << endl;
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