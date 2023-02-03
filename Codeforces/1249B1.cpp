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
	cin>>n;
    int arr[n+5];
    for (int i = 1; i <= n; i++)
    {
    	cin>>arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
    	int cnt=0;
    	int k=i;
    	while(1){
    		k=arr[k];
    		++cnt;
    		if(k==i) break;
    	}
    	cout<<cnt<<" ";
    	
    }
    cout<<endl;
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