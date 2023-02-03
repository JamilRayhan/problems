#include<bits/stdc++.h>
using namespace std;

#define ll       long long
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
    string s;
    cin>>s;
    int tmp,cnt=0;
    if (s[0]=='a'&&s[1]=='b')
    {
    	for (int i = 2; i < sz(s); ++i)
    	{
    		if(s[i]=='b'){
    			cnt++;
    		}
    		else{
    			tmp=i;
    			break;
    		}
    	}
    	if (cnt+2==sz(s))
    	{
    		for (int i = 0; i < sz(s)-2; ++i)
    		{
    			cout<<s[i];
    		}
    		cout<<" "<<s[sz(s)-2]<<" "<<s[sz(s)-1]<<endl;
    	}
    	else{
    		cout<<s[0]<<" ";
    		for (int i = 1; i < tmp; ++i)
    		{
    			cout<<s[i];
    		}
    		cout<<" ";
    		for (int i = tmp; i < sz(s); ++i)
    		{
    			cout<<s[i];
    		}
    		cout<<endl;
    	}
    }
    else{
    	cout<<s[0]<<" "<<s[1]<<" ";
    	for (int i = 2; i < sz(s); ++i)
    	{
    		cout<<s[i];
    	}
    	cout<<endl;
    }
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