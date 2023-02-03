#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	vector<int> v1(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v1[i];
	}
	map<int, int> mp;
	if (n == 1)
	{
		cout << "0\n";
		return;
	}
	mp[v1[n - 1]] = n - 1;
	for (int i = n - 2; i >= 0; i--)
	{
		if (v1[i] > v1[i + 1])
		{
			int ans = i;
			int k = i;
			while (k >= 0)
			{
				if (mp.count(v1[k]) != 0)
				{
					ans = max(ans, mp[v1[k]]);
				}
				k--;
			}
			map<int, int> mp1;
			while (ans >= 0)
			{
				mp1[v1[ans]]++;
				ans--;
			}
			cout << mp1.size() << endl;
			return;
		}
		else
		{
			if (mp.count(v1[i]) == 0)
			{
				mp[v1[i]] = i;
			}
		}
	}

	cout << "0\n";
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}

	return 0;
}