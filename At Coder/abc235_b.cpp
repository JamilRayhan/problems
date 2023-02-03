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
    int n,con=0;
    cin>>n;
    int arr[n+5];
    arr[0]=-1;
    for (int i = 1; i <= n; ++i)
    {
    	cin>>arr[i];
    	//cout<<arr[i];
    	if (arr[i]<=arr[i-1])
    	{ 
    		con=1;
    		cout<<arr[i-1]<<endl;
    		break;
    	}
    }
    
    if(con==0)
    	cout<<arr[n]<<endl;
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