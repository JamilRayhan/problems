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
    string a,b,c,T;
    cin>>a>>b>>c>>T;
    for (int i = 0; i < T.size(); i++)
    {
        if (T[i]=='1')
        {
            /* code */
            cout<<a;
        }
        else if (T[i]=='2')
        {
            /* code */
            cout<<b;
        }        if (T[i]=='3')
        {
            /* code */
            cout<<c;
        }
        
    }cout<<endl;
    return 0;
}

int main() {
    int test = 1, tc = 0;
    //Int(test);
    //cin >> test;
    while (test--) {
        //printf("Case %d: ", ++tc);
        solve();
    }
    return 0;
}
