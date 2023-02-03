#include<bits/stdc++.h>
using namespace std;

#define ll       long long int
#define ull      unsigned ll
#define pii      pair<int, int>
#define pll      pair<ll, ll>
#define mp       make_pair
#define pb       push_back
#define gcd      _gcd
#define str_int  stoi
#define sz(x)    (int) x.size()
#define endl     "\n"
#define yes      cout<<"YES"<<endl;
#define no       cout<<"NO"<<endl;
#define all(v)   v.begin(), v.end()
#define mxv(v)   *max_element(v.begin(), v.end())
#define mnv(v)   *min_element(v.begin(), v.end())
const int MOD = (int)1e9 + 7;


bool palindrome(int arr[], int n)
{
	int flag = 0;
	for (int i = 0; i <= n / 2 && n != 0; i++) {
		if (arr[i] != arr[n - i - 1]) {
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		return false;
	else
		return true;
}
int solve() {
	int n, s = INT_MAX, l = 0;
	cin >> n;
	int arr[n + 5];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	if (palindrome(arr, n))
	{
		cout << 0 << endl;
		return 0;
	}
	else {
		for (int i = 0; i < n - 1; ++i)
		{
			if (arr[i] > arr[i + 1])
			{
				cout << -1 << endl;
				return 0;
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		s = min(s, arr[i]);
		l = max(l, arr[i]);
	}
	cout << l - s << endl;
	return 0;
}

int main() {
	int test = 1, tc = 0;
	//Int(test);
	cin >> test;
	while (test--) {
		//printf("Case %d: ", ++tc);
		solve();
	}
	return 0;
}