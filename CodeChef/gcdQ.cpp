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
#define yes      cout<<"YES"<<endl
#define no       cout<<"NO"<<endl
#define all(v)   v.begin(), v.end()
#define mxv(v)   *max_element(v.begin(), v.end())
#define mnv(v)   *min_element(v.begin(), v.end())
const int MOD =  (int)1e9 + 7;

int solve() {
    int n,q;
    cin>>n>>q;
    int a[n+5],f[n+5]={0},b[n+5]={0};
    for (int i = 1; i <= n; ++i)
    {
    	cin>>a[i];
    }
int gc=0;
    for (int i = 1; i <= n; ++i)
    {
    	f[i]=gcd(f[i-1],a[i]);
    }for (int i = n; i >0; i--)
    {
    	b[i]=gcd(b[i+1],a[i]);
    }

    while(q--){
    	int r,l;
    	cin>>l>>r;
    	cout<<gcd(f[l-1],b[r+1])<<endl;
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