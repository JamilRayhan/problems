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

int fact(ll int n){
	ll int factorial=1;
	for (ll int i = 2; i <= n; i++)
	{
		factorial*=i;
	}
	return factorial;
}

int nCr(ll int n,ll int r){
	return fact(n)/(fact(n-r)*fact(r));
}

int solve() {
    ll int n,r;
    cin>>n>>r;

    cout<<nCr(n,r)<<endl;

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