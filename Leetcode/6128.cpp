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
int solve(int ranks[],char suits[]) {
    int ar[15];
    for (int i = 0; i < 5; ++i)
    {
    	ar[ranks[i]]++;
    }
    for (int i = 0; i < 4; ++i)
    {
    	if (suits[i]==suits[i+1])
    	{
    		cout<<"Flush"<<endl;
    		return 0;
    	}
    }
    for (int i = 1; i < 14; ++i)
    {
    	if (ar[i]>=3)
    	{
    		cout<<"Three of a Kind"<<endl;
    		return 0;
    	}
    }
    for (int i = 1; i < 14; ++i)
    {
    	if (ar[i]==2)
    	{
    		cout<<"Pair"<<endl;
    		return 0;
    	}
    }
    cout<<"High Card"<<endl;
    return 0;
}

int main() {
    //ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int test = 1, tc = 0;
    //Int(test);
    //cin >> test;
    while (test--) {
        //printf("Case %d: ", ++tc);
        int ranks[]={13,2,3,1,9};
        char suits[]={'a','a','a','a','a'}

        solve(ranks,suits);
    }
    return 0;
}