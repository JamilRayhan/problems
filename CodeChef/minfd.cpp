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
	int n, x;
	cin >> n >> x;
	int arr[n + 5],cnt=0;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	for (int i = n - 1; i >= 0 ; i--)
	{
		x=x-arr[i];
		cnt++;
		if (x<=0)
			break;
	}
	if (x<=0)
	{
		cout<<cnt<<endl;
	}
	else
		cout<<-1<<endl;

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