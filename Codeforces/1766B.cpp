#include<bits/stdc++.h>
using namespace std;

#define ll       long long
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
    cin>>n;
    string s;
    cin>>s;
    map<pair<char,char>,int> mp;
    pair<char,char> p={s[0],s[1]};
    mp[p]++;
    for (int i = 2; i < n; ++i)
    {
    	pair<char,char> ab={s[i-1],s[i]};
    	if (mp[ab]!=0)
    	{
    		if ((ab==p&&mp[ab]>1)||(ab!=p))
    		{
    			yes
    			return 0;
    		}
    	}
    	p=ab;
    	mp[ab]++;
    }
    no
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