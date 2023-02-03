#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using ll = long long;

void solve() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double x = a / b, y = c / d;
    ll n = a * d, m = b * c;
    if (x == y)
        cout << "0\n";
    else if (a == 0 || c == 0 || n % m == 0 || m % n == 0)
        cout << "1\n";
    else
        cout << "2\n";
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
}