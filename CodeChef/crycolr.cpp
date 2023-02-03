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
    int n;
    cin>>n;
    int r[5],g[5],b[5];
    for (int i = 1; i <= 3; ++i)
    	cin>>r[i];
    for (int i = 1; i <= 3; ++i)
    	cin>>g[i];
    for (int i = 1; i <= 3; ++i)
    	cin>>b[i];
    
    cout<<r[2]+r[3]+g[3]<<endl;

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