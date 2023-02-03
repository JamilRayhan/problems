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
    int a[n+5],b[n+5];
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    }
    for (int i = 0; i < n; ++i)
    {
    	cin>>b[i];
    }
    for (int i = 0; i < n; ++i)
    {
    	if (a[i]<b[i])
    	{
    		int temp=a[i];
    		a[i]=b[i];
    		b[i]=temp;
    	}
    }
    sort(a,a+n);
    sort(b,b+n);
    int ans=a[n-1]*b[n-1];
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