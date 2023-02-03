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
	string s = "abcdefghijklmnopqrstuvwxyz";
	int n;
	cin >> n ;
	string x;
	cin >> x;
	vector<char> v;
	for (int i = n - 1; i >= 0;)
	{
		int k = 0;
		//cout << x[i] - '0' << endl;
		if (((x[i] - '0') != 0))
		{

			v.push_back(s[(x[i] - '0') - 1]);
			x.pop_back();
			i--;
		}
		else {
			x.pop_back();
			k = (x[i - 1] - '0') + 10 * (x[i - 2] - '0');
			//cout << k << endl;
			v.push_back(s[k - 1]);
			x.pop_back();
			x.pop_back();
			i -= 3;
		}
	}
	for (int i = v.size() - 1; i >= 0 ; i--)
	{
		cout << v[i];
	}
	cout << endl;
	return 0;
}

int main() {
	//fast;
	int test = 1, tc = 0;
	//Int(test);
	cin >> test;
	while (test--) {
		//printf("Case %d: ", ++tc);
		solve();
	}
	return 0;
}