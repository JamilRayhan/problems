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

int solve() {
    int n,store=-1;
    cin>>n;
    int arr[n+5];
    for (int i = 0; i < n; ++i)
    {
    	cin>>arr[i];
    }
    for (int i = 1; i < n; ++i)
    {
    	if (arr[i]>arr[0])
    	{
    		store=i;
    		break;
    	}
    }
    if (store==-1)
    {
    	cout<<-1<<endl;
    	return 0;
    }
    cout<<store<<endl;
    for (int i = 0; i < store; ++i)
    {
    	cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<n-store<<endl;
    for (int i = store; i < n; ++i)
    {
    	cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    int test = 1, tc = 0;
    //Int(test);
    cin >> test;
    while (test--) {
        //printf("Case %d: ", ++tc);
        solve();
    }
    return 0;
}