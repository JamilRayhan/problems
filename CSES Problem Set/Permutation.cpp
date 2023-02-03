#include<bits/stdc++.h>
using namespace std;

#define fast 	 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll       long long
#define ull      unsigned ll
#define pii      pair<int, int>
#define pll      pair<ll, ll>
#define mp       make_pair
#define ff       first
#define ss       second
#define sz(x)    (int) x.size()
#define all(v)   v.begin(), v.end()
void permute(string s, int l, int r) {
	if (l == r)
	{
		cout << s << " ";
	} else {
		for (int i = l; i <= r; ++i)
		{
			swap(s[l], s[i]);
			permute(s, l + 1, r);
			swap(s[l], s[i]);
		}
	}
}

int main() {
	//fast;
	string str;
	while (cin >> str) {
		int n = str.size();
		permute(str, 0, n - 1);
	}
	return 0;
}