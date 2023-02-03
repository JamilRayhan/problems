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
    int n,cnt=0;
    cin>>n;
    string s;
    cin>>s;
    for (int i = 0; i < n; ++i)
    {
    	if (s[i]=='1')
    	{
    		cnt++;
    	}
    }
    if (cnt&1||(s[n-1]=='1'&&s[n-2]=='0'))
    {
    	no;
    	return 0;
    }
   
    for (int i = 0; i < n;i++)
    {
    	if (s[i]=='0'&& s[i+1]=='1'&&s[i+2]=='0')
    	{
    		no;
    		return 0;
    	}
    }
    yes;
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