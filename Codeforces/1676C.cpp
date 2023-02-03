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
int cost(string a,string b){
	int val =0;
	for (int i = 0; i < a.size(); ++i)
	{
		val+=abs(a[i]-b[i]);
	}
	return val;
}
int solve() {
	int n,m;
	cin>>n>>m;
    vector <string> s(n);
    for (int i = 0; i < n; ++i)
    {
    	cin>>s[i];
    }
    int ans=INT_MAX;
    for (int i = 0; i < n; ++i)
    {
    	for (int j = i+1; j < n; ++j)
    	{
    		ans=min(ans,cost(s[i],s[j]));
    	}
    }
    cout<<ans<<endl;
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