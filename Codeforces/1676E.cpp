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


int binarySearch(int array[], int x, int low, int high) {

	while (low <= high) {
		int mid = low + (high - low) / 2;

		if (array[mid] == x)
			return mid+1;

		if (array[mid] < x)
			low = mid + 1;

		else
			high = mid - 1;
	}

	return low+1;
}

int solve() {
	int n, q, cnt = 0;
	cin >> n >> q;
	int arr[n + 5];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n, greater<int>());
	for (int i = 0; i < n; ++i)
	{
		cnt += arr[i];
		arr[i]=cnt;
	}

	while (q--) {
		int x,s=0;
		cin >> x;
		if (x > cnt)
		{
			cout << -1 << endl;
		}
		else if(arr[0]>=x){
			cout<<1<<endl;
		}
		else{
			int k=binarySearch(arr, x, 0, n - 1);
			cout<<k<<endl;
		}
		// else {
		// 	int k = binarySearch(arr, x, 0, n - 1);
		// 	if (k != -1)
		// 	{
		// 		cout << 1 << endl;
		// 	}
		// 	else{
		// 		int count=0;
		// 		for (int i = n-1; i >=0 ; i--)
		// 		{
		// 			s+=arr[i];
		// 			count++;
		// 			if (s>=x)
		// 			{
		// 				break;
		// 			}
		// 		}
		// 		cout<<count<<endl;
		// 	}
		// }
		
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