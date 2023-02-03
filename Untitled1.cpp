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
void solve() {
	char s[9][9];
	for (int i = 1; i <= 8; i++) 
	{
		for (int j = 1; j <= 8; j++) 
		{
			cin >> s[i][j];
		}
	}
	for (int i = 2; i <= 7; i++) 
	{
		for (int j = 2; j <= 7; j++) 
		{
			if (s[i][j] == '#' && s[i - 1][j - 1] == '#' && s[i - 1][j + 1] == '#' && s[i + 1][j - 1] == '#' && s[i + 1][j + 1] == '#') 
			{
				cout << i << ' ' << j << endl; 
				return;
			}
		}
	}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
    // solve();
}