#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		ll a[n + 1];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a + n);
		if (a[0] >= 0)
		{
			cout << a[0]*a[0] << " " << a[n - 1]*a[n - 1] << endl;

		}
		else
		{
			if (a[n - 1] == 0 && a[0] < 0)
			{
				cout << 0 << " " << a[0]*a[0] << endl;
			}
			else if (a[n - 1] < 0 && a[0] < 0)
				cout << a[n - 1]*a[n - 1] << " " << a[0]*a[0] << endl;
			else if (a[n - 1] > 0 && a[0] < 0)
				cout << a[n - 1]*a[0] << " " << max(a[n - 1]*a[n - 1], a[0]*a[0]) << endl;
		}
	}
	return 0;
}