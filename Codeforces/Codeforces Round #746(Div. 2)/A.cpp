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
    int n,h,c=0;
    cin>>n>>h;
    int arr[n+5];
    for (int i = 0; i < n; i++)
    {
    	cin>>arr[i];
    }
    sort(arr,arr+n);
    int k1=arr[n-1];
    int k2=arr[n-2];
    if (h%(k1+k2)==0)
    {
    	cout<<2*(h/(k1+k2))<<endl;
    }
    else if (h%(k1+k2)<=k1)
    {
    	cout<<2*(h/(k1+k2))+1<<endl;
    }
    else
    	cout<<2*(h/(k1+k2))+2<<endl;

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