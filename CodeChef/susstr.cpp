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
    string s,t;
    cin>>s;
    while(1){

    	if (s[0]=='1')
    	{
    		t.push_back('1');
    	}
    	else
    		t.insert(0,1,'0');
    	s.erase(s.begin());
    	if (s.size()<=0)
    	{
    		break;
    	}
    	if (s[sz(s)-1]=='1')
    	{
    		t.insert(0,1,'1');
    	}
    	else t.push_back('0');
    	s.erase(s.end()-1);
    	if (s.size()<=0)
    	{
    		break;
    	}
    }
    cout<<t<<endl;
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