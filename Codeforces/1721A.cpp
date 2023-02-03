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
	string s, p;
	cin >> s >> p;
	int arr[27] = {0};
	for (int i = 0; i < 2; ++i)
	{
		arr[s[i] - 'a']++;
		arr[p[i] - 'a']++;
	}

	int m = 0, k = 100;
	for (int i = 0; i < 26; i++)
	{
		if (arr[i] > 0) {
			m = max(m, arr[i]);
			k = min(k, arr[i]);
		}

	}
	if (m == 4)
	{
		cout << 0 << endl;
	}
	else if (m == 1)
	{
		cout << 3 << endl;
	}
	else if (m == k || m == 3)
	{
		cout << 1 << endl;
	}
	else {
		cout << 2 << endl;
	}
	arr[27] = {0};
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