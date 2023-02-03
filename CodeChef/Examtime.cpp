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
	int dsa, toc, dm, dsa1, toc1, dm1;
	cin >> dsa >> toc >> dm;
	cin >> dsa1 >> toc1 >> dm1;
	int x = dsa + toc + dm, y = dsa1 + toc1 + dm1;

	if (dsa == dsa1 && toc == toc1 && dm == dm1)
	{
		cout<<"Tie"<<endl;
	}
	else if (x>y||y>x)
	{
		string ab= x>y ? "Dragon":"Sloth";
		cout<<ab<<endl;
	}
	else if (x==y&&(dsa>dsa1||dsa1>dsa))
	{
		string ab=dsa>dsa1? "Dragon":"Sloth";
		cout<<ab<<endl;
	}
	else{
		string ab= toc>toc1? "Dragon":"Sloth";
		cout<<ab<<endl;
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