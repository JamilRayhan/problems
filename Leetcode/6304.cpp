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

int solve(vector<int> nums, int n, int maxsum) {
	set<int>s;
	for (int i = 0; i < nums.size(); ++i)
	{
		s.insert(nums[i]);
	}
	int sum = 0, cnt = 0;
	for (int i = 1; i <= n; ++i)
	{
		if (s.find(i) == s.end())
		{
			sum += i;
			if (sum > maxsum)
			{
				break;
			}
			cnt++;
		}

	}
	return cnt;
}

int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int test = 1, tc = 0;
	//Int(test);
	//cin >> test;
	while (test--) {
		int n, m, ms;
		cin >> n >> m >> ms;
		vector<int> nums(n);
		for (int i = 0; i < n; ++i)
		{
			cin >> nums[i];
		}
		cout << solve(nums, m, ms);
	}
	return 0;
}