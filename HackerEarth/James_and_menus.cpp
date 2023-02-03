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
int main() {
    //ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int test,n, tc = 0;
    cin >> test;
    cin>>n;
    int arr[test][n] ,temp[n+5]={0};
    for (int i = 0; i < test; ++i)
    {
    	for (int j = 0; j < n; ++j)
    	{
    		cin>>arr[i][j];
    	}
    }
    for (int i = 0; i < n; ++i)
    {
    	for (int j = 0; j < test; ++j)
    	{
    		if (temp[i]<arr[j][i])
    		{
    			temp[i]=j+1;
    		}
    	}
    }
    for (int i = 0; i < n; ++i)
    {
    	cout<<temp[i]<<" ";
    }
    return 0;
}