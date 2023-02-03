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

int main() {
    //ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int test = 1, tc = 0;
    //Int(test);
    cin >> test;
    map< int,multiset<string>> m;
    lpi (test) {
        string s;
        int f;
        cin>>s>>f;
        m[f].insert(s);
    }
    auto l_it=--m.end();
    while(1){
    	auto &s=(*l_it).second;
    	int mark=(*l_it).first;
    	for(auto x:s){
    		cout<<x<<" "<<mark<<endl;
    	}
    	if (l_it==m.begin())
    		break;
    	--l_it;
    }
    return 0;
}