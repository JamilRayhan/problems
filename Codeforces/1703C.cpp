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
	int n;
	cin >> n;
	int arr[n + 5];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	for (int j = 0; j < n; j++)
	{
		int b;
		string s;
		cin >> b >> s;
		for (int i = 0; i < b; i++)
		{
			if (s[i] == 'D')
			{
				arr[j]++;
				if (arr[j] > 9)
				{
					arr[j] = 0;
				}
			}
			else {
				arr[j]--;
				if (arr[j] < 0)
				{
					arr[j] = 9;
				}
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
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