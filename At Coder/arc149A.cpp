#include<bits/stdc++.h>
using namespace std;

#define ll       long long int
#define ull      unsigned ll
#define pii      pair<int, int>
#define pll      pair<ll, ll>
#define mp       make_pair
#define pb       push_back
#define gcd      _gcd
#define str_int  stoi
#define sz(x)    (int) x.size()
#define endl     "\n"
#define yes      cout<<"YES"<<endl;
#define no       cout<<"NO"<<endl;
#define all(v)   v.begin(), v.end()
#define mxv(v)   *max_element(v.begin(), v.end())
#define mnv(v)   *min_element(v.begin(), v.end())
const int MOD = (int)1e9 + 7;

bool checkSameDigits(ll N)
{
   
    // Find the last digit
    int digit = N % 10;
 
    while (N != 0)
    {
 
        // Find the current last digit
        int current_digit = N % 10;
 
        // Update the value of N
        N = N / 10;
 
        // If there exists any distinct
        // digit, then return No
        if (current_digit != digit)
        {
            return 0;
        }
    }
 
    // Otherwise, return Yes
    return 1;
}

int solve() {
    ll n,m;
    cin>>n>>m;
    if (m/10==0)
    {
    	cout<<m<<endl;
    	return 0;
    }
    ll loop=pow(10,n);
    for (int i = 1; i <= loop; ++i)
    {
    	ll x=m*i;
    	if(checkSameDigits(x)){
    		cout<<x<<endl;
    		return 0;
    	}
    }
    cout<<-1<<endl;
    return 0;
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    int test = 1, tc = 0;
    //Int(test);
    //cin >> test;
    while (test--) {
        //printf("Case %d: ", ++tc);
        solve();
    }
    return 0;
}