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
const int N   =  (int)1e7+5;

ll a[N];

int solve() {
    int n,m;
    cin>>n>>m;
    while(m--){
    	int x,y,k;
    	cin>>x>>y>>k;
    	a[x]+=k;
    	a[y+1]-=k;
    }
    ll mx=-1;
    for (int i = 1; i <= n; ++i)
    {
    	a[i]=a[i-1]+a[i];
    	mx = max(mx,a[i]);
    }
    cout<<mx<<endl;
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