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
const int MOD =  (int)1e9 + 7;

int solve() {
	std::vector<set<char>> r(9),c(9),b(9);
	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9; j++)
		{
			if (board[i][j]!='.')
			{
				int d=board[i][j],b=(i/3)*3+(j/3);
			}
 			if (!rows[i].emplace(d).second) return 0;  
            if (!cols[j].emplace(d).second) return 0;  
            if (!blck[b].emplace(d).second) return 0;
		}
	}
	return 1;
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