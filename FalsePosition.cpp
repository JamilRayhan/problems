#include<bits/stdc++.h>
using namespace std;

#define lpi(n)   for(int i=0 ; i<n ; i++)
#define lpj(n)   for(int j=0 ; j<n ; j++)
#define ll       long long int
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

double func(double c) {
	return 3 * c - exp(-c);
}

int solve() {
	double a , b;
	cout << "Interval:";
	cin >> a >> b;

	if (func(a)*func(b) >= 0)
	{
		cout << "Range is not right" << endl;
	}
	else {
		int cnt=0;
		double c = a;
		while (abs(b - a) >= 0.0001)
		{
			cnt++;
			c = (a * func(b) - b * func(a)) / (func(b) - func(a));
			if (func(c) == 0)
			{
				break;
			}
			else if (func(c)*func(a) < 0)
				b = c;
			else
				a = c;
		}
		cout << setprecision(3);
		cout << "Root is" << " " << c <<" "<<cnt<< endl;
	}
	return 0;
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