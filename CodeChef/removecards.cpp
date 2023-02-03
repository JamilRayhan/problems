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

int solve() {
    int n;
    cin>>n;
    set<int>s;
    multiset<int>m;
    for (int i = 0; i < n; ++i)
    {
    	int x;
    	cin>>x;
    	s.insert(x);
    	m.insert(x);
    }
    int mx=0;
    for(auto x:s)
    {
    	int t=m.count(x);
    	mx=max(t,mx);	
    }
    if (mx==n)
    {
    	cout<<0<<endl;
    }
    else cout<<n-mx<<endl;
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