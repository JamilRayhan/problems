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
    vector<int> s(n);
    vector<int> f(n);
    for (int i = 0; i < n; ++i)
    {
    	cin>>s[i];
    }
    for (int i = 0; i < n; ++i)
    {
    	cin>>f[i];
    }
    cout<<f[0]-s[0]<<" ";
    for (int i = 1; i < n; ++i)
    {
    	if (f[i-1]>s[i])
    	{
    		cout<<f[i]-f[i-1]<<" ";
    	}
    	else{
    		cout<<f[i]-s[i]<<" ";
    	}
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