#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string arr;
		cin >> arr;
    	for (int i = 0; i < n; i++){
			if (n == 1) {
				if (arr[i] == 'L')
				{
					cout << 'R' << endl;
				}
				else if (arr[i] == 'U')
				{

					cout << 'D' << endl;
				}
				else if (arr[i] == 'R')
				{

					cout << 'L' << endl;
				}
				else if (arr[i] == 'D')
				{

					cout << 'U' << endl;
				}
			}
			else if (arr[i] == 'U')
			{
				arr[i] = 'D';
			}
			else if (arr[i] == 'D')
			{
				arr[i] = 'U';
			}
		}
		if (n!=1)
		{
			/* code */cout<<arr<<endl;
		}
		
	}
	return 0;
}