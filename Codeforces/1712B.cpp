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
	if (n % 2 == 0)
	{
		for (int i = 2; i <= n ; i += 2)
		{
			cout << i << " ";
			cout << i - 1 << " ";
		}
		cout << endl;
	}
	else {
		cout << 1 << " ";
		for (int i = 3; i <= n; i += 2)
		{
			cout << i << " ";
			cout << i - 1 << " ";
		}
		cout << endl;
	}
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