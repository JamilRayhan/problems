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
string s = "abcdefghijklmnopqrstuvwxyz";
int solve() {
	string p, q;
	cin >> p;
	q = p;
	int f = p[0] - 'a';
	int l = p[p.size() - 1] - 'a';

	if (f > l)
	{

	}
	int cnt = 0;
	for (int i = 0; i < p.size(); ++i)
	{
		if (p[0] == q[i])
		{

		}
	}
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