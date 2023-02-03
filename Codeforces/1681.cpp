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
    int n,m;
    cin>>n;
    int a[n+5];
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    }
    sort(a,a+n);
    cin>>m;
    int b[m+5];
    for (int i = 0; i < m; ++i)
    {
    	cin>>b[i];
    }
    sort(b,b+m);
    if(a[n-1]>b[m-1]){
    	cout<<"Alice"<<endl;
    	cout<<"Alice"<<endl;
    }
    if(a[n-1]<b[m-1]){
    	cout<<"Bob"<<endl;
    	cout<<"Bob"<<endl;
    }
    else if (a[n-1]==b[m-1])
    {
    	cout<<"Alice"<<endl;
    	cout<<"Bob"<<endl;
    	
    }

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