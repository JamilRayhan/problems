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
	ll n;
	cin >> n;
	std::vector<int> v, k;
	if ((n * (n + 1) / 2) % 2 != 0)
	{
		cout << "NO" << endl;
	}
	else {
		cout << "YES" << endl;
		ll mid = (n * (n + 1) / 2) / 2;
		for (int i = n; i > 0 ; i--)
		{
			if (mid - i >= 0)
			{
				mid -= i;
				v.push_back(i);
			}
			else {
				k.push_back(i);
			}

		}
		cout << v.size() << endl;
		for (int i = 0; i < v.size(); ++i)
		{
			cout << v[i] << " ";
		}
		cout << endl;
		cout << n - v.size() << endl;
		for (int i = 0; i < n - v.size(); ++i)
		{
			cout << k[i] << " ";
		}
		cout << endl;
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