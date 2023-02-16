#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> freq(55, 0);
        for (int i = 0; i < n; i++) {
            int l, r;
            cin >> l >> r;
            for (int i = l; i <= r; ++i)
            {
                freq[i]++;
            }

        }
        if (n==1)
        {
            cout << "NO\n";
        }
        else if (freq[x]==0) cout << "NO\n";
            
        else cout << "YES\n";
            
    }
    return 0;
}
