#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--) {
		int n, k, x, sum1 = 0, sum2 = 0;
		cin >> n >> k;
		int arr[n + 5];
		for (int i = 1; i <= n; i++)
		{
			cin >> arr[i];
			sum1 = sum1 + arr[i];
			if (arr[i] == k)
				x = i;

		}
		
		for (int i = 1; i <= n; i++)
		{
			if (x != i)
			{
				arr[i] = arr[i] ^ k;
			}
			sum2 = sum2 + arr[i];
		}
		int ans=(sum1 >= sum2) ? sum1 : sum2 ;
		cout << ans << endl;
	}
	return 0;
}