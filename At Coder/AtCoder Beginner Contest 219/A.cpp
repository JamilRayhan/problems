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
    int x;
    cin>>x;
    if (x<40)
    {
    	cout<<40-x<<endl;
    }
    else if (x>=40&&x<70)
    {
    	cout<<70-x<<endl;
    }
    else if (x>=70&&x<90)
    {
    	cout<<90-x<<endl;
    }
    else 
    	cout<<"expert"<<endl;
    return 0;
}

int main() {
    int test = 1, tc = 0;
    //Int(test);
    //cin >> test;
    while (test--) {
        //printf("Case %d: ", ++tc);
        solve();
    }
    return 0;
}
