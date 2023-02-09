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
	int n;
	cin >> n;
	int a = 0, b = 0, c = 0, d = 0;
	int i = 0;
	for (; ++i; )
	{
		if (n < i)
			if (i % 4 < 2)
				a += n - n / 2, b += n / 2, i = -1;
			else
				c += n / 2, d += n - n / 2, i = -1;
		else if (i % 4 < 2)
			a += i - i / 2, b += i / 2, n -= i;
		else
			c += i / 2, d += i - i / 2, n -= i;
	}
	cout << a << " " << b << " " << c << " " << d << endl;
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