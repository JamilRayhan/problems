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
    int n,input;
    cin>>n;
    set<int> a;
    for (int i = 0; i < n ; ++i)
    {
    	cin>>input;
    	a.insert(input);
    }
    if ((n-a.size())%2==0)
    {
		cout << a.size() << endl;
	}
	else
	{
		cout << a.size()-1 << endl;
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