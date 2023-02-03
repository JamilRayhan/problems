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
	int arr[n + 5], br[n + 5];
	std::vector<int> v;
	std::map<int, int> map;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
		br[i] = i + 1;
	}
	int ans = 0;
	for (int i = 0; i < n - 1; ++i)
	{
		if (arr[i] == arr[i + 1])
		{
			v.push_back(br[i + 1]);
			swap(br[i], br[i + 1]);
			map[i]++;
			map[i + 1]++;
		}
		else {
			if (map[i] != 0)
			{
				v.push_back(br[i]);
			}
			else {
				ans = 1;
				break;
			}
		}
	}
	if (map[n - 1] != 0)
		v.push_back(br[n - 1]);
	else
		ans = 1;
	if (ans == 1)
		cout << "-1" << endl;
	else
		for (int i = 0; i < n; ++i)
		{
			cout << v[i] << " ";
		}
	cout << endl;
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