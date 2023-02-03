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
    string X,Z;
    cin>>X;
    int arr[30];
    for (int i = 0; i < 26; i++)
    {
        arr[i+1] = X[i]-96;
        //cout<<arr[i+1];            
    }
    int n;
    cin>>n;
    for (int i = 0; i < n*2
         ; i++)
    {
        cin>>Z[i];
        
    }cout<<Z<<endl;
    return 0;
}

int main() {
    int test = 1, tc = 0;
    //Int(test);
    //cin >> test;
    while (test--) {
        //printf("Case %d: ", ++tc);
        solve();
    }
    return 0;
}
