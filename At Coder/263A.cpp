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
	int a[6], b[14] = {0}, x = 0, y = 0;
	for (int i = 0; i < 5; ++i)
	{
		cin >> a[i];
		b[a[i]]++;
	}
	for (int i = 0; i < 14; ++i)
	{
		if (b[i] == 3)
		{
			x = 1;
		}
		if (b[i] == 2)
		{
			y = 1;
		}
	}
	if (x == 1 && y == 1)
	{
		cout << "Yes" << endl;
	}
	else
		cout << "No" << endl;
	return 0;
}

int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int test = 1, tc = 0;
	//Int(test);
	//cin >> test;
	while (test--) {
		//printf("Case %d: ", ++tc);
		solve();
	}
	return 0;
}