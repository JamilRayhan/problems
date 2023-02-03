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

bitset<500001> Primes;
void SieveOfEratosthenes(int n)
{
	Primes[0] = 1;
	for (int i = 3; i * i <= n; i += 2) {
		if (Primes[i / 2] == 0) {
			for (int j = 3 * i; j <= n; j += 2 * i)
				Primes[j / 2] = 1;
		}
	}
}
int solve() {
	int n;
	cin >> n;
	int arr[n + 5];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
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