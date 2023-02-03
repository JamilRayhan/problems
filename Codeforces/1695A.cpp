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
int solve() {
    int n,k;
    cin>>n>>k;
    int arr[n+5];
    int m=k;
    for (int i = 0; i < n-1; ++i)
    {
        cin>>arr[i];
    }
    while(k--){
            cout<<1;
    }
    for (int i = 0; i < n-m; ++i)
    {
        cout<<0;
    }
    cout<<endl;
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