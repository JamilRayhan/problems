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

string v="aeiou";
int solve() {
    string s;
    cin>>s;
    int cnt=0,j=0;
    for (int i = 0; i < sz(s); ++i)
    {
    	for (j = 0; j < sz(v); ++j)
    	{
    		if (s[i]==v[j])
    		{
    			cnt++;
    			break;
    		}
    	}
		if(cnt>2) {
			cout<<"Happy"<<endl;
			return 0;
		}
    	if (j==sz(v))
    	{
    		cnt=0;
    	}
    } 
    cout<<"Sad"<<endl;
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