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
int main() {
    //ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int test = 1, tc = 0;
    //Int(test);
    //cin >> test;
    while (test--) {
        //printf("Case %d: ", ++tc);
        string s;
        cin>>s;
        int x=s.size();
        if (x==3)
        {
        	cout<<s<<s<<endl;
        }
        else if (x==2)
        {
        	cout<<s<<s<<s<<endl;
        }
        else
        	cout<<s<<s<<s<<s<<s<<s<<endl;
        
    }
    return 0;
}