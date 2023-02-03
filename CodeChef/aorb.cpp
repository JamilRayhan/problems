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
    int x,y;
    cin>>x>>y;
    int temp1=1000-y*4;
    int temp2=500-(x+y)*2;
    int f=temp1+temp2;
    temp1=500-x*2;
    temp2=1000-(x+y)*4;
    int s=temp1+temp2;
    cout<<max(f,s)<<endl;
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