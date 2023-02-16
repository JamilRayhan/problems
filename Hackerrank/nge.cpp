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

vector<int> NGE(vector<int> v) {
	stack<int>st;
	vector<int>ans(v.size());
	for (int i = 0; i < v.size(); ++i)
	{
		while(!st.empty()&&v[st.top()] < v[i])
		{
			ans[st.top()]=i;
			st.pop();
		}
		st.push(i);
	}
	while (!st.empty()) {
		ans[st.top()] = -1;
		st.pop();
	}
	return ans;
}

int main() {
	int n;
	cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	vector<int> nge= NGE(v);
	for (int i = 0; i < n; ++i)
	{
		cout<<v[i]<<" "<<((nge[i]==-1)?-1:v[nge[i]])<<endl;
	}
	return 0;
}