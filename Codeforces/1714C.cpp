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
	int s;
	cin >> s;
	int arr[10], j = 0, k = 0;
	if (9 >= s)
	{
		cout << s << endl;
		return 0;
	}
	for (int i = 9; i >= 0; i-- )
	{
		s -= i;
		arr[j] = i;
		if (s < i)
		{
			arr[j + 1] = s;
			k = j + 1;
			break;
		}
		j++;

	}
	for (int i = k; i >= 0; i--)
	{
		cout << arr[i];
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