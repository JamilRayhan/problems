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

int solve() {
    int n,m;
    cin>>n>>m;
    queue<int>q;
    stack<int>s;
    for (int i = 0; i < m; ++i)
    {
    	int x;
    	cin>>x;
    	q.push(x);
    }
    s.push(1);
    for (int i = 2; i <= n+1; ++i)
    {
    	//cout<<q.front();
    	if (q.front() == i-1)
    	{
    		s.push(i);
    		q.pop();
    	}
    	else{
    		while(!s.empty()){
    			cout<<s.top()<<" ";
    			s.pop();
    		}
    		s.push(i);
    	}
    }
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