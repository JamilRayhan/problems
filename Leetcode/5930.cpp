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

int main()
{
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int test = 1, tc = 0;
	cin >> test;
	while (test--)
	{
		int colorsSize;
		cin >> colorsSize;
		int colors[colorsSize + 5];
		for (int i = 0; i < colorsSize; ++i)
		{
			cin >> colors[i];
		}
		int count = 0;
		int final = 0,arr[100];
		for (int i = 0 ; i < colorsSize ; i++)
		{
			for (int j = i + 1; j < colorsSize; j++)
			{
				count++;
				if (colors[i] != colors[j])
				{
					final = count;
					//cout<<count<<final;
				}
			}

			arr[i]=final;
			count=0;
		}
		sort(arr,arr+colorsSize);
		cout << arr[colorsSize-1] << endl;

	}
	return 0;
}