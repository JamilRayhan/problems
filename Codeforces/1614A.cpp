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
    ll int n,l,r,k;
    ll int c,d;
    cin>>n>>l>>r>>k;
    ll int arr[n+5];
    for (int i = 0; i < n; i++)
    {
    	cin>>arr[i];
    }
    sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
    	if (arr[i]>l)
    	{
    		c=i;
    		break;
    	}
    }
    for (int i = n-1; i >=0 ; i--)
    {
    	if (arr[i]<r)
    	{
    		d=i;
    		break;
    	}
    }
    long long int ar=0,cnt=0;
    for (int i = c; i <= d; i++)
    {
    	
    	ar=ar+arr[i];
    	//cout<<ar<<" "<<k<<endl;
    	if (ar<=k)
    	{
    		cnt++;
    	}
    	
    }
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