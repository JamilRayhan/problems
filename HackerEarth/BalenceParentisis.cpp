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

unordered_map<char, int> symbols={{'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3}};

int solve() {
	string x;
	cin >> x;
	stack<char>s;
	for(auto bracket:x){
		if (symbols[bracket]<0)
		{
			s.push(bracket);
		}
		else{
			if (s.empty()) {
				no
				return 0;
			}
			char top=s.top();
			s.pop();
			if (symbols[top]+symbols[bracket]!=0)
			{
				no
				return 0;
			}
		}
	}
	if (!s.empty())
	{
		no
	}
	else yes
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