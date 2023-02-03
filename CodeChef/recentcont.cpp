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

int count(string k,int b){
	int cnt=b;
	if (k[0]=='S')
	{
		cnt++;
	}
	return cnt;
}

int solve() {
    int n;
    cin>>n;
    vector<string>s(n);
    for (int i = 0; i < n; ++i)
    {
    	cin>>s[i];
    }
    int b=0;
    for (int i = 0; i < n; ++i)
    {
    	b=count(s[i], b);
    }
    cout<<b<<" "<<n-b<<endl;
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