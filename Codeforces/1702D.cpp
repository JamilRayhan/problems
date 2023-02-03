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
	string w;
	int p, count = 0;
	cin >> w >> p;
	int arr[27] = {0};
	for (int i = 0; i < w.size(); ++i)
	{
		int temp = w[i] - 'a' + 1;
		count += temp;
		arr[temp]++;

	}
	if (count <= p)
	{
		cout << w << endl;
		return 0;
	}
	for (int i = 26; i > 0; )
	{
		if (arr[i] > 0 && p < count) {
			count -= i;
			arr[i]-- ;
		}
		else
			i--;
	}
	for (int i = 0; i < w.size(); ++i)
	{

		if (p < count)
		{
			break;
		}
		else if (arr[w[i] - 'a' + 1] > 0)
		{

			cout << w[i];
			arr[w[i] - 'a' + 1]--;
		}
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