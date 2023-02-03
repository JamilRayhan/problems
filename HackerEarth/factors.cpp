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
ll int solve() {
    ll int n,ans1=1,ans2=1;
    cin>>n;
    ll int A[n+5],B[n+5];
    for (int i = 0; i < n; i++)
    	cin>>A[i];
    for (int i = 0; i < n; i++)
    	cin>>B[i];
    for (int i = 0; i < n; i++)
    {
    	ans1=(ans1%1000000007)*(A[i]+B[i]+1)%1000000007;
    	ans2=(ans2%1000000007)*((A[i]+1)*(B[i]+1))%1000000007;
    }
    cout<<ans1<<" "<<ans2<<endl;
    return 0;
}

int main() {
    //ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll int test = 1, tc = 0;
    //Int(test);
    cin >> test;
    while (test--) {
        //printf("Case %d: ", ++tc);
        solve();
    }
    return 0;
}