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
int q = 1e9 + 7;
int solve() {
    ll int n,ans=0;
    cin>>n;
    ll int x=n;
    ll int arr[n+5];
    for (int i = 0; i < n; ++i)
    {
    	cin>>arr[i];
    }
    sort(arr,arr+n);
    reverse(arr, arr + n);
    for (int i = 0; i < n; ++i)
    {
    	if ((arr[i]-i)>0)
    	{
    		ans+=(arr[i]-i)%q;
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