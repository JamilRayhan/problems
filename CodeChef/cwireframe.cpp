#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m, x;
		cin >> n >> m >> x;
		int ans = 2 * n + 2 * m;
		cout << ans*x << endl;
	}
	return 0;
}
