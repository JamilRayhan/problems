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
#define yes      cout<<"Yes"<<endl;
#define no       cout<<"No"<<endl;
#define all(v)   v.begin(), v.end()
#define mxv(v)   *max_element(v.begin(), v.end())
#define mnv(v)   *min_element(v.begin(), v.end())
const int MOD =  (int)1e9 + 7;

int solve() {
    int h,w;
    cin>>h>>w;
    int a[h+5]={0},b[h+5]={0};
    for (int i = 0; i < h; ++i)
    {
    	string s;
    	cin>>s;
    	for (int j = 0; j < w; ++j)
    	{
    		if (s[j]=='#')
    		{
    			a[i]++;
    		}
    	}
    }    
    for (int i = 0; i < h; ++i)
    {
    	string s;
    	cin>>s;
    	for (int j = 0; j < w; ++j)
    	{
    		if (s[j]=='#')
    		{
    			b[i]++;
    		}
    	}
    }
    for (int i = 0; i < h; ++i)
    {
    	if (a[i]!=b[i])
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
    //cin >> test;
    while (test--) {
        //printf("Case %d: ", ++tc);
        solve();
    }
    return 0;
}