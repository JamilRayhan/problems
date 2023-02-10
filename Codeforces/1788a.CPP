#include<bits/stdc++.h>
using namespace std;

#define lpi(n)   for(int i=0 ; i<n ; i++)
#define lpj(n)   for(int j=0 ; j<n ; j++)
#define ll       long long int
#define ull      unsigned ll
#define pii      pair<int, int>
#define pll      pair<ll, ll>
#define mp       make_pair
#define pb       push_back
#define gcd      __gcd
#define str_int  stoi
#define sz(x)    (int) x.size()
#define endl     "\n"
#define yes      cout<<"YES"<<endl;
#define no       cout<<"NO"<<endl;
#define all(v)   v.begin(), v.end()
#define mxv(v)   *max_element(v.begin(), v.end())
#define mnv(v)   *min_element(v.begin(), v.end())
const int MOD =  (int)1e9 + 7;

int solve() {
    int n;
    cin>>n;
    int a[n+5],one=0,two=0;
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    	if (a[i]==1)
        {
            one++;
        }
        else two++;
    }
    if (two&1)
    {
        cout<<-1<<endl;
        return 0;
    }
    if (n==one)
    {
        cout<<1<<endl;
        return 0;
    }
    int half=two/2;
    for (int i = 0; i < n; ++i)
    {
        
        if (a[i]==2)
        {
            half--;
        }
        if (half==0)
        {
            cout<<i+1<<endl;
            break;
        }

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