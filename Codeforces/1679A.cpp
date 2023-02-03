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
	ll n,x,y;;
	cin >> n;
	if (n%2!=0||n<4)
	{
		/* code */cout << -1 << endl;
	}
	
	else {
		n/=2;
		x=n/2;
		if (n%3==1||n%3==2)
		{
			y=n/3+1;
		}
		else 
			y=n/3;
		cout<<y<<" "<<x<<endl;
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