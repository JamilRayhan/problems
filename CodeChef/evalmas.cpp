#include<bits/stdc++.h>
using namespace std;

#define lpi(n)   for(int i=0 ; i<n ; i++)
#define lpj(n)   for(int j=0 ; j<n ; j++)
#define ll       long long int
#define ull      unsigned ll
#define pii      pair<int, int>
#define pll      pair<ll, ll>
#define mp       make_pair
#define pb       push_back
#define gcd      __gcd
#define str_int  stoi
#define sz(x)    (int) x.size()
#define endl     "\n"
#define yes      cout<<"YES"<<endl;
#define no       cout<<"NO"<<endl;
#define all(v)   v.begin(), v.end()
#define mxv(v)   *max_element(v.begin(), v.end())
#define mnv(v)   *min_element(v.begin(), v.end())
const int MOD =  (int)1e9 + 7;

void ifgodwills() {
    int N, X;
    cin >> N >> X;
    int maximum = N + 1;
    int minimum = -(N-1);
    if(X >maximum || X < minimum) {
        cout << -1 << "\n";
        return;
    }
    if(X >= 1) {
        for(int i=0; i<X-1; i++) {
            cout << "+";
        }
        for(int i=0; i<N-X+1; i++) {
            cout << "*";
        }
        cout << "\n";
        return;
    } 
    if(X <= 0) {
        for(int i=0; i<=abs(X); i++) {
            cout << "-";
        }
        for(int i = 0; i<N-abs(X)-1;i++) {
            cout << "*";
        }
        cout << "\n";
    }
    
}  
int main() {
    fastio
    int t = 1 ;
    std::cin >> t;
    while(t--) {
        ifgodwills() ;
    }
}