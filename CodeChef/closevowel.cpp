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

const string nearestVowels= "aaaeeeeiiiiioooooouuuuuuuu";
const string nearestVowels2="aaeeeeiiiiioooooouuuuuuuuu";
						   //abcdefghijklmnopqrstuvwxyz
int solve() {
    int n,cnt=0,mod=1e9+7;
    cin>>n;
    char arr[n+5];
    cin>>arr;
    int ans=1;
    for (int i = 0; i < n; ++i)
    {
    	if (arr[i]=='c'||arr[i]=='g'||arr[i]=='l'||arr[i]=='r')
    	{
    		ans*=2;

    		ans%=mod;
    	}
    }
    
    cout<<ans<<endl;
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