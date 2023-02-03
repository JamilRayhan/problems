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

void febonacci(ll int n) {
	ll int first = 0;
	ll int second = 1;
	for (ll int i = 1; i <= n; i++)
	{
		ll int temp = first + second;
		cout << first << endl;
		first = second;
		second= temp;
	}
	return;
}

int solve() {
	int n;
	cin >> n;

	febonacci(n);

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