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
const int MOD =  (int)1e9 + 7;

int solve() {
    int n,cnt=0;int x;
    cin>>n;
    vector<int> a;
    set<int>s;
    multiset<int>m;
    for (int i = 0; i < n; ++i)
    {
    	cin>>x;
    	s.insert(x);
    	m.insert(x);
    }
   	if (sz(s)==1)
    {
    	cout<<0<<endl;
    	return 0;
    }
    int mx=0;
    for (auto i:s){
    	a.pb(i);
    	int k=m.count(i);
  		mx=max(mx,k);
    }
    vector<int>ans;
    for (int i = 0; i < a.size()-1; ++i)
    {
    	if ((a[i]^a[i+1])<=1)
    	{
    		int z=m.count(a[i]),l=m.count(a[i+1]);
    		ans.push_back(n-(z+l));
    	}
    }
    ans.pb(n-mx);
    sort(all(ans));
    cout<<ans[0]<<endl;
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