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
	ll int test , tc = 0;
	//Int(test);
	cin >> test;
	while (test--) {
		//printf("Case %d: ", ++tc);
		string str;
		cin >> str;
        string x=str;
        reverse(str.begin(), str.end());
        if (x==str)
        	cout<<"Palindrome"<<endl;
        else
        	cout<<"Not Palindrome"<<endl;
	}


	return 0;
}