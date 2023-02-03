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
    int n,fh=0,lh=0;
    cin>>n;
    int x=n%1000,y=n/1000;
    for (int i = 0; i < 3; ++i)
    {
    	fh+=x%10;
    	
    	x=x/10;
    	lh+=y%10;
    	
    	y=y/10;
    }
    if (fh==lh)
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