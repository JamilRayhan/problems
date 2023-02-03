#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n'
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]: ", debug_out(__VA_ARGS__)
#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    std::cin.tie(NULL);          \
    std::cout.tie(NULL);
#define all(x) (x).begin(), (x).end()
const long double EPS = 5e-8;
#define PI 3.1415926535897932384626433832795
const ll MOD = 1000000007;
template <typename T>
inline void print_vector(const vector<T> &a)
{
    for (auto &x : a)
        cout << x << ' ';
    cout << endl;
}
inline ll binary_pow(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
inline ll mod_pow(ll x, ll y, ll m = MOD)
{
    ll res = 1;
    x = x % m;
    if (x == 0)
        return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % m;
        y = y >> 1;
        x = (x * x) % m;
    }
    return res;
}
inline ll mod_add(ll a, ll b, ll m = MOD)
{
    a = a % m;
    b = b % m;
    return (((a + b) % m) + m) % m;
}
inline ll mod_mul(ll a, ll b, ll m = MOD)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}
inline ll mod_sub(ll a, ll b, ll m = MOD)
{
    a = a % m;
    b = b % m;
    return (((a - b) % m) + m) % m;
}
inline ll mminvprime(ll a, ll b)
{
    return mod_pow(a, b - 2, b);
}
inline ll mod_div(ll a, ll b, ll m = MOD)
{
    a = a % m;
    b = b % m;
    return (mod_mul(a, mminvprime(b, m), m) + m) % m;
}
inline ll ceilf(ll x, ll y)
{
    return x % y == 0 ? x / y : x / y + 1;
}
// Use this for randomizing things
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
/**********************************************************/

void test_case()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a)
        cin >> x;
    ll cur_gcd = a[0];
    for (int i = 1; i < n; i++)
    {
        cur_gcd = __gcd(cur_gcd, a[i]);
        if (cur_gcd != a[i])
        {
            cout << -1 << endl;
            return;
        }
    }
    print_vector(a);
}

int main()
{
    FAST_IO
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        test_case();
    }
    return 0;
}