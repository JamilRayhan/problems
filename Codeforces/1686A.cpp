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
    int n,cnt=0;
    cin>>n;
    int arr[n+5],m[n+5];
    for (int i = 0; i < n; ++i)
    {
    	cin>>arr[i];
    	cnt+=arr[i];
    }
    for (int i = 0; i < n; ++i)
    {
    	m[i]=(cnt-arr[i])/(n-1);
    }
    for (int i = 0; i < n; ++i)
    {
    	if (arr[i]==m[i])
    	{
    		cout<<"Yes"<<i<<m[i]<<endl;
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
    cin >> test;
    while (test--) {
        //printf("Case %d: ", ++tc);
        solve();
    }
    return 0;
}