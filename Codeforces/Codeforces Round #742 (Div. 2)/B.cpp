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
	int a, b;
	cin >> a >> b;
	int pXor;
	if (a % 4 == 1) {pXor = a-1;}
	else if (a % 4 == 2) {pXor = 1;}
	else if (a % 4 == 3) {pXor = a;}
	else {pXor = 0;}
	    
	if (pXor == b) {cout << a << endl;}
    else if ((pXor ^ b) != a) {cout << a + 1 << endl;}
    else {cout << a + 2 << endl;}
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
