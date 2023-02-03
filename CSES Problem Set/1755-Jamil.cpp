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

string p = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int solve() {
	string s;
	cin >> s;
	int arr[27] = {0}, cnt = 0;

	for (int i = 0; i < s.length(); ++i)
	{
		arr[s[i] - 'A']++;
	}
	int odd = -1;
	for (int i = 0; i < 26; ++i)
	{

		if (arr[i] % 2 == 1)
		{

			if (odd == -1)
			{
				odd = i;
			}
			else {
				cout << "NO SOLUTION" << endl;
				return 0;
			}
		}
	}
	string ans;
	if (s.length() % 2 == 0 && odd != -1)
	{
		cout << "NO 1 SOLUTION" << endl;
	}
	else if (odd == -1 && s.length() % 2 == 1)
	{
		cout << "NO 2 SOLUTION" << endl;
	}
	else {
		for (int i = 0; i < 26; ++i)
		{
			for (int j = 0; j < arr[i] / 2; j++)
				ans += (char)('A' + i);
		}
		cout << ans;
		if (odd != -1)
		{
			cout << (char)('A' + odd);
		}
		reverse(all(ans));
		cout << ans << endl;;
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