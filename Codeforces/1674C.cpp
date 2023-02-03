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
	string s, t;
	int flag = 0;
	cin >> s >> t;
	for (int i = 0; i < t.size() ; ++i)
	{
		if (t[i] == 'a')
		{
			flag = 1;
		}
	}
	if (t.size() == 1 && t[0] == 'a')
	{
		cout << 1 << endl;
	}
	else if (t.size() >= 2 && flag>0)
	{
		cout << -1 << endl;
	}
	else{
		ll x= pow(2,s.size()); 
		cout <<x<< endl;
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