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
	string s, t, f;
	cin >> s >> t;
	int sa[27] = {0}, ta[27] = {0};
	for (int i = 0; i < s.size(); ++i)
	{
		sa[s[i] - 'A']++;
	}
	for (int i = 0; i < t.size(); ++i)
	{
		ta[t[i] - 'A']++;
	}

	for (int i = 0; i < 26; ++i)
	{
		int temp = sa[i] - ta[i], cnt = 0;;
		if (temp < 0)
		{
			cout << "NO" << endl;
			return 0;
		}
		for (int j = 0; j < s.size(); ++j)
		{
			if (cnt == temp)
			{
				break;
			}
			if (s[j] - 'A' == i)
			{
				s.erase(j, 1);
				j = 0;
				cnt++;

			}

		}
	}
	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] != t[i]) {
			cout << "NO" << endl;
			return 0;
		}
	}
	// cout << s << endl;
	cout << "YES" << endl;
	return 0;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int test = 1, tc = 0;
	//Int(test);
	cin >> test;
	while (test--) {
		//printf("Case %d: ", ++tc);
		solve();
	}
	return 0;
}