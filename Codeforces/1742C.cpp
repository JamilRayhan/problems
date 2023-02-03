#include<bits/stdc++.h>
using namespace std;

#define ll       long long int
#define ull      unsigned ll
#define pii      pair<int, int>
#define pll      pair<ll, ll>
#define mp       make_pair
#define pb       push_back
#define gcd      _gcd
#define str_int  stoi
#define sz(x)    (int) x.size()
#define endl     "\n"
#define yes      cout<<"YES"<<endl;
#define no       cout<<"NO"<<endl;
#define all(v)   v.begin(), v.end()
#define mxv(v)   *max_element(v.begin(), v.end())
#define mnv(v)   *min_element(v.begin(), v.end())
const int MOD = (int)1e9 + 7;

bool isPalindrome(string S)
{
	// Stores the reverse of the
	// string S
	string P = S;

	// Reverse the string P
	reverse(P.begin(), P.end());

	// If S is equal to P
	if (S == P) {
		// Return "Yes"
		return true;
	}
	// Otherwise
	else {
		// return "No"
		return false;
	}
}
int solve() {
	int n = 8, cnt = 0, cntr = 0;
	vector<string> v;
	while (n--) {
		string s;
		cin >> s;
		v.pb(s);
	}
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			if (v[i][j] == 'R')
			{
				cnt++;
			}
		}
		if (cnt == 8)
		{
			cout << "R" << endl;
			return 0;
		}

	}
	cout << "B" << endl;
	return 0;
}

int main() {
	int test = 1, tc = 0;
	//Int(test);
	cin >> test;
	while (test--) {
		//printf("Case %d: ", ++tc);
		solve();
	}
	return 0;
}