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
	int n, x;
	cin >> n;
	std::vector<int> v[n + 5];
	for (int i = 1; i <= n; ++i)
	{
		cin >> x;
		v[x].push_back(i);
	}
	for (int i = 1; i <= n; ++i)
	{
		if (v[i].size() <= 1)
		{
			cout << v[i].size() << " ";
		}
		else {
			int cnt = 1;
			for (int j = 1; j < v[i].size(); ++j)
			{
				int dif = v[i][j] - v[i][j - 1];
				dif--;
				if (dif % 2 == 0)
				{
					cnt++;
				}
			}
			cout << cnt << " ";
		}
	} cout << endl;

	return 0;
}

int main() {
	fast;
	int test = 1, tc = 0;
	//Int(test);
	cin >> test;
	while (test--) {
		//printf("Case %d: ", ++tc);
		solve();
	}
	return 0;
}