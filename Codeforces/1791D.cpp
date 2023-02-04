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
    string s;
    cin>>n>>s;
    int ans=0,cnt1=0,cnt2=0;
    map<char, int> mp1,mp2;
    for(auto x:s){
        mp1[x]++;
        if (mp1[x]==1)
        {
            cnt1++;
        } 
    }
    for (int i = 0; i < n-1; ++i)
    {
        mp1[s[i]]--;
        mp2[s[i]]++;
        if (mp2[s[i]]==1) cnt2++;
        if (mp1[s[i]]==0) cnt1--;
    
        ans=max(ans,cnt1+cnt2);
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