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
	int n=cost.size(),x=0,y=0;
    sort(cost.begin(),cost.end());
    for (int i = n-1; i >=0 ; i--)
    {
     	x=x+cost[i];
     	y++;
     	if (y==2)
     	{
     		i--;
     		y=0;
     	}
    }

    return x;
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