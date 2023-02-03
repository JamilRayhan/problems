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
    int n,cnt=0;
    cin>>n;
    int arr[n+5];
    for (int i = 0; i < n; ++i)
    {
    	cin>>arr[i];
    }
    if (n==1)
    {
    	cout<<0<<endl;
    	return 0;
    }
    for (int i = n-1; i >=1; i--)
    {

    	while(arr[i]<=arr[i-1])
    	{
    		if (arr[i-1]==0)
    		{
    			break;
    		}
    		arr[i-1]/=2;

    		cnt++;
    		
    	}
    }
    if (arr[0]>=arr[1])
    {
    	cout<<-1<<endl;
    }
    else
    	cout<<cnt<<endl;
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