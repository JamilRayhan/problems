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
	if (n == 1)
	{
		cout << 1 << endl;
	}
	else if (n < 4)
	{
		cout << "NO SOLUTION" << endl;
	}
	else if (n == 4)
	{
		cout << 3 << " " << 1 << " " << 4 << " " << 2 << endl;
	}
	else {
		for (int i = 1; i <= n; i += 2)
		{
			cout << i << " ";
		}
		for (int i = 2; i <= n; i += 2)
		{
			cout << i << " ";
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