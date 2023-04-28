#include<bits/stdc++.h>
using namespace std;

#define ll           long long int
#define ull          unsigned ll
#define pii          pair<int, int>
#define pll          pair<ll, ll>
#define mp           make_pair
#define pb           push_back
#define gcd          __gcd
#define str_int      stoi
#define sz(x)        (int) x.size()
#define endl         "\n"
#define yes          cout<<"YES"<<endl
#define no           cout<<"NO"<<endl
#define all(v)       v.begin(), v.end()
#define mxv(v)       *max_element(all(v))
#define mnv(v)       *min_element(all(v))
#define sumv(v)      accumulate(all(v), 0)
#define cntv(v,e)    count(all(v), e) 
#define rev(v)       reverse(all(v))

const int   MOD =   (int)1e9 + 7;
const double pi =   3.14159265359;

int solve() {
    int n,l;
    cin>>n>>l;
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
    	int x;
    	cin>>x;
    	v.push_back(x);
    }
    sort(all(v));
    int ans=2*max(v[0],l-v[n-1]);

    for (int i = 0; i < n-1; ++i)
    {
    	ans=max(ans,v[i+1]-v[i]);
    }
    printf("%.10f\n",ans/2.0);
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