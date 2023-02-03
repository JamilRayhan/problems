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
    ll n,m,suma=0,sumb=0,sumArev=0;
    cin>>n;
    ll a[n+5];
    for (ll i = 0; i < n; ++i)
    {
    	cin>>a[i];
    	suma+=a[i];
    	if (suma<0)
    	{
    		suma=0;
    	}
    }
    for (ll i = n-1; i >= 0; i--)
    {
    	sumArev+=a[i];
    	if (sumArev<0)
    	{
    		sumArev=0;
    	}
    }
    suma=max(suma,sumArev);
    cin>>m;
    ll b[m+5];
    for (ll i = 0; i < m; ++i)
    {
    	cin>>b[i];
    	if(b[i]>0)
    		sumb+=b[i];
    }
    cout<<sumb+suma<<endl;
    return 0;
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    int test = 1, tc = 0;
    //Int(test);
    cin >> test;
    while (test--) {
        //printf("Case %d: ", ++tc);
        solve();
    }
    return 0;
}