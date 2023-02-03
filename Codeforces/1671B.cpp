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
	int n, cnt1 = 0, cnt2 = 0, cnt = 0;
	cin >> n;
	int arr[n + 5];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n - 1; ++i)
	{
		if (arr[i + 1] - arr[i] > 3)
		{
			cnt = 1;
		}
		if (arr[i + 1] - arr[i] == 2)
		{
			cnt1++;
		}
		if (arr[i + 1] - arr[i] == 3)
		{
			cnt2++;
		}
	}

	if (cnt1 <= 2 && cnt == 0 && cnt2 == 0)
	{
		cout << "YES" << endl;
	}
	else if (cnt2 <= 1 && cnt == 0 && cnt1 == 0)
	{
		cout << "YES" << endl;
	}
	else
		cout << "NO" << endl;
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