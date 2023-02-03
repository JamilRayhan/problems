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
	int a1, a2, b1, b2, c1, c2, d1, d2;
	cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2 >> d1 >> d2;
	int ac = (a1 - c1) * (a1 - c1) + (a2 - c2) * (a2 - c2);
	int bd = (b1 - d1) * (b1 - d1) + (b2 - d2) * (b2 - d2);
	if (ac == bd)
	{
		cout << "Yes" << endl;
	}
	else
		cout << "No" << endl;
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