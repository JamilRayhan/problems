#include <iostream>

using namespace std;

int main() {
    long long N;
    cin >> N;
    
    for (long long c = 1; c <= 1e18; c++) {
        long long d = c ^ N;
        if (d > 1e18) continue;
        long long a_or_b = d | c;
        if (a_or_b >= (1LL << 62)) continue;
        long long a_xor_b = d ^ c;
        if (a_xor_b >= (1LL << 62)) continue;
        long long a_b_mask = (1LL << 62) - 1;
        for (long long a_mask = 1; a_mask <= a_b_mask; a_mask <<= 1) {
            if ((a_or_b & a_mask) == 0) continue;
            long long b_mask = a_b_mask ^ a_mask;
            if ((a_xor_b & b_mask) != b_mask) continue;
            long long a = a_or_b & a_mask;
            long long b = a_or_b & b_mask;
            if (a != b && a != c && a != d && b != c && b != d && c != d) {
                cout << a << " " << b << " " << c << " " << d << endl;
                return 0;
            }
        }
    }
    
    cout << -1 << endl;
    return 0;
}
