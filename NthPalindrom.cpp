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

int reverseNum(int n) {
    string str;
    stringstream ss;
    ss << n;
    ss >> str;
    reverse(str.begin(), str.end());
    stringstream i(str);
    int rev = 0;
    i >> rev;
    return rev;
}

bool isPalindrom(int num) {
    return num == reverseNum(num);
}

int nthPalindrom(int n) {
    int num = 1;
    while (1) {
        if (isPalindrom(num))
            --n;
        if (!n)
            break;
        ++num;
    }
    return num;
}

int solve() {
    int n;
    cin >> n;
    cout<<nthPalindrom(n)<<endl;

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