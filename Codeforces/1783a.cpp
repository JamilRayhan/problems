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
    set<int>s;
    for (int i = 0; i < n; ++i)
    {
    	cin>>arr[i];
    	s.insert(arr[i]);
    }
    if (s.size()==1)
    {
    	no
    }
    else{
    	sort(arr,arr+n,greater<int>());
    	if (arr[0]==arr[1])
    	{
    		int temp=arr[n-1];
    		arr[n-1]=arr[0];
    		arr[0]=temp;
    	}
    	yes
    	for (int i = 0; i < n; ++i)
    	{
    		cout<<arr[i]<<" ";
    	}
    	cout<<endl;
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