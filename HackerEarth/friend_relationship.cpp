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
	int n;
    cin>>n;
    n--;
    for (int i = 0; i < n; ++i)
    {
    	for(int j = 0; j <=i ; ++j){
    		cout<<'*';
    	}
    	for (int j = 0; j < n-i; ++j)
    	{
    	    cout<<"##";	
    	}    
    	for(int j = 0; j <=i ; ++j){
    		cout<<'*';
    	}
    	cout<<endl;
    }
    n++;
    for (int i = 0; i < n; ++i)
    {
    	cout<<"**";
    }cout<<endl;
    return 0;
}

int main() {
    int test = 1, tc = 0;
    //Int(test);
   	cin >> test;
    while (test--) {
        //printf("Case %d: ", ++tc);
        solve();
    }
    return 0;
}