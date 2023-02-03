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
    int x,y,k;
    cin>>x>>y>>k;
    if (x==0&&y==0&&k==0)
    {
    	cout<<"YES"<<endl;
    }
    if (x%k==0&&y%k==0&&k!=0)
    {
    	cout<<"YES"<<endl;
    }
    else
    	cout<<"NO"<<endl;
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