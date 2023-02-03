#include<bits/stdc++.h>
using namespace std;

#define ll       long long
#define ull      unsigned ll
#define pii      pair<int, int>
#define pll      pair<ll, ll>
#define mp       make_pair
#define ff       first
#define ss       second
#define sz(x)    (int) x.size()
#define all(v)   v.begin(), v.end()
int solve() {
    int n,cnt=0,l,r;
    cin>>n;
    std::vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
    	cin>>v[i];
    	if (v[i]==0)
    	{
    		cnt++;
    	}
    	if (v[i]>0)
    	{
    		r=i;
    	}
    }
    if (cnt==n)
    {
    	cout<<0<<endl;
    	return 0;
    }
    for (int i = 0; i < n; ++i)
    {
    	if (v[i]!=0)
    	{
    		l=i;
    		break;
    	}
    }
    for (int i = l; i < r; ++i)
    {
    	if (v[i]==0&&v[i+1]!=0&&v[i-1]!=0)
    	{
    		cout<<2<<endl;
    		return 0;
    	}
    }
    cout<<1<<endl;
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