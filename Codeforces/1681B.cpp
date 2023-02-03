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
    ull n,m,cn=0,cm=0;
    cin>>n;
    ull a[n+5];
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    }
    cin>>m;
    ull b[m+5];
    for (int i = 0; i < m; ++i)
    {
    	cin>>b[i];
        cm+=b[i];
    }
    if (n==cm)
    {
        cout<<a[0]<<endl;
    }
    else{
        ull temp=cm%n;
        cout<<a[temp]<<endl;
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