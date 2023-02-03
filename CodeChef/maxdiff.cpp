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
    ll int n,k,sum=0,ksum=0;
    cin>>n>>k;
    ll int arr[n+5];
    for (int i = 0; i < n; ++i)
    {
    	cin>>arr[i];
    }
    sort(arr,arr+n);
    if(n/2<k) k=n-k;
    for (int i = 0; i < k; ++i)
    {
    	ksum+=arr[i];
    }
    for (int i = k; i < n; ++i)
    {
    	sum+=arr[i];
    }
    cout<<sum-ksum<<endl;
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