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
    ll n;
    cin >> n;
    ll arr[n + 5];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    vector<ll> top;
    for (int i = 0; i < n; ++i)
    {
        ll red = arr[i];
        auto it = upper_bound(top.begin(), top.end(), red);
        if (it == top.end())
        {
            top.push_back(red);
        }
        else {
            *it = red;
        }
    }
    cout << top.size() << " ";
    for (auto x : top)
    {
        cout << x << " ";
    }
    cout << endl;
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