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
int solve(int src, int dest, int aux, int n) {
	if (n <= 0)
	{
		return 0;
	}
	solve(src, aux, dest, n - 1);
	cout << src << " " << dest << endl;
	solve(aux, dest, src, n - 1);
	return 0;
}

int main() {
	fast;
	int test = 1, tc = 0;
	//Int(test);
	//cin >> test;
	while (test--) {
		//printf("Case %d: ", ++tc);
		int n;
		cin >> n;
		cout << (1 << n) - 1 << endl;
		solve(1, 3, 2, n);
	}
	return 0;
}