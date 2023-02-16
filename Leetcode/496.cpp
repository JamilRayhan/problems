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

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
	stack<int>st;
	vector<int>ans(nums2.size());
	vector<int>up;
	for (int i = 0; i < nums2.size(); ++i)
	{
		while (!st.empty() && nums2[st.top()] < nums2[i])
		{
			ans[st.top()] = i;
			st.pop();
		}
		st.push(i);
	}
	while (!st.empty()) {
		ans[st.top()] = -1;
		st.pop();
	}
	unorderd_map<int, int>mp;
	for (int i = 0; i < n; i++) {
		mp[nums1[i]] = nums1[ans[i]];
	}
	ans.erase();
	for (auto x : nums2) {
		ans.push_back(mp[x]);
	}
	return ans;
}

int solve() {

	return 0;
}

int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int test = 1, tc = 0;
	//Int(test);
	//cin >> test;
	while (test--) {
		//printf("Case %d: ", ++tc);
		solve();
	}
	return 0;
}