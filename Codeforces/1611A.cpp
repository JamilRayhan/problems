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
    	string n;
    	int x=0;
    	cin>>n;
    	if (n[n.size()-1]%2==0)
    	{
    		cout<<0<<endl;
    	}
    	else if (n[0]%2==0)
    	{
    		cout<<1<<endl;
    	}
    	else{
    		for (int i = 0; i < n.size(); i++)
    		{
    			if(n[i]%2==0){
    				cout<<2<<endl;
    				x=1;
    				break;
    			}
    		}
    		if(x==0){
    			cout<<-1<<endl;
    		}
    	}
    }
    return 0;
}