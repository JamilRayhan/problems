#include<bits/stdc++.h>
using namespace std;

#define ll       long long
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
    int arr[n+5];
    for (int i = 1; i <= n; ++i)
    {
    	cin>>arr[i];
    }
    sort(arr+1,arr+n+1);
    int cnt=0;
    for (int i = 1; i <= n; ++i)
    {
    	if (arr[i]<=i)
    	{
    		cnt+=i-arr[i];
    	}
    	else{
    		cout<<-1<<endl;
    		return 0;
    	}
    }
    cout<<cnt<<endl;
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