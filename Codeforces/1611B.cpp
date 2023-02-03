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
int operation(int s, int b) {
	if (s * 3 <= b)
	{
		return s;
	}
	else {
		if (s % 2 == 0 && b % 2 == 0 && ((s + 1) == b / 2 || ((s - 1) == b / 2)))
		{
			return ((s + 1) == b / 2 || ((s - 1) == b / 2)) ? s / 2 + 1 : s / 2;
		}
		else if (s % 2 == 0 && b % 2 != 0 && s == b / 2)
		{
			return (s == b / 2) ? s / 2 + 1 : s / 2;
		}
		return ((b - s + 1) >= 3) ? (s / 2 + 1) : (s / 2);
	}
}

int solve() {
	int a, b;
	cin >> a >> b;
	if (a == b)
	{
		cout << a / 2 << endl;
	}
	else
		cout << operation(min(a, b), max(a, b)) << endl;
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