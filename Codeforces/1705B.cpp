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
    ll int n,cnt=0,temp=0;
    cin>>n;
    std::vector<ll int> v(n);
  	for (int i = 0; i < n; ++i)
  	{
  		cin>>v[i];
  	}
  	while(temp<n&&v[temp]==0)
  		temp++;
  	
  	for (int i = temp; i < n-1; ++i)
  	{
  		cnt+=v[i];
  		if (v[i]==0)
  		{
  			cnt++;
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