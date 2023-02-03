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
    int n, k;
    int N = 200005;
    int a[200005] = {0};
    cin >> n >> k;
    int arr[n + 5];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        a[arr[i]]++;
    }
    int b[N], x=0;
    for (int i = 0, j = 0; i < N; ++i)
    {
        if (a[i] >= k)
        {
            b[j] = i;
            j++;
        }
        x = j;
    }
    sort(b,b+x+1);

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