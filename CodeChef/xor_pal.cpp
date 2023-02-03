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
    int n,count=0;
    cin>>n;
    string s,p;
    cin>>s;
    p=s;
    reverse(p.begin(),p.end());
    for (int i = 0; i < n; ++i)
    {
    	if (s[i]!=p[i])
    	{
    		count++;
    	}
    }
    cout<<count/2<<endl;
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