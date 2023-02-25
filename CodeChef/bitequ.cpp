#include<bits/stdc++.h>
using namespace std;

#define lpi(n)   for(int i=0 ; i<n ; i++)
#define lpj(n)   for(int j=0 ; j<n ; j++)
#define ll       long long int
#define ull      unsigned ll
#define pii      pair<int, int>
#define pll      pair<ll, ll>
#define mp       make_pair
#define pb       push_back
#define gcd      __gcd
#define str_int  stoi
#define sz(x)    (int) x.size()
#define endl     "\n"
#define yes      cout<<"YES"<<endl;
#define no       cout<<"NO"<<endl;
#define all(v)   v.begin(), v.end()
#define mxv(v)   *max_element(v.begin(), v.end())
#define mnv(v)   *min_element(v.begin(), v.end())
const int MOD =  (int)1e9 + 7;

int solve() {
	ll n, a, b, c, d;
	cin >> n;
	if (n == 0)
		cout << "3 1 6 7" << endl;
	else if (n == 1)
		cout << "1 4 3 2" << endl;
	else if (n == 2)
		cout << "2 4 3 1" << endl;
	else if (n == 3)
		cout << "8 3 2 1" << endl;
	else
	{
		a = 1;
		b = 2;
		c = 3;
		d = n ^ 3;
		cout << a << " " << b << " " << c << " " << d << " " << endl;
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