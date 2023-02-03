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
    int a[n+5],b[k+5],t[n+5];
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    	t[i]=a[i];
    }
    sort(t,t+n);
    int max=t[n-1];
    for (int i = 0; i < k; ++i)
    {
    	cin>>b[i];
    	if (a[b[i]]==max)
    	{
    		cout<<"Yes"<<endl;
    		return 0;
    	}
    }
    cout<<"No"<<endl;
    return 0;


}
int main() {
    //ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int test = 1, tc = 0;
    //Int(test);
    //cin >> test;
    while (test--) {
        //printf("Case %d: ", ++tc);
        solve();
    }
    return 0;
}