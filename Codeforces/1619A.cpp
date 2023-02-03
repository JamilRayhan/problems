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
    int test = 1, tc = 0;
    //Int(test);
    cin >> test;
    while (test--) {
    	string s;
    	cin>>s;
    	int x=s.size();
    	if (x%2!=0)
    	{
    		cout<<"NO"<<endl;
    	}
    	else{
    		int a=0;
    		for (int i = 0,j=(x/2); i < x/2; i++,j++)
    		{
    			if (s[i]!=s[j])
    			{
    				cout<<"NO"<<endl;
    				//cout<<i<<" "<<j<<endl;
    				a=1;
    				break;
    			}
    		}
    		if (a==0)
    		{
    			cout<<"YES"<<endl;
    		}
    		a=0;
    	}
    }
    return 0;
}