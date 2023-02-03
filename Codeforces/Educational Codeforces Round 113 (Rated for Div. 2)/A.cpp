#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, cnt = 0, count = 0, x = -1;
		cin >> n;
		string s;
		cin >> s;
		for (int i = 0; i < n; i++)
		{
			if (s[i] != 'b')
			{
				cnt = cnt+1;
			}
			else
			{
				count = count+1;
			}
		}
		if (cnt == n || count== n || n==1)
		{
			cout << x <<" " << x <<endl;
		}
		else{
			for (int i = 0; i < n; ++i)
			{
				if (s[i]=='a'&&s[i+1]=='b'||s[i]=='b'&&s[i+1]=='a')
				{
					cout<<i+1<<" "<<i+2<<endl;
					break;
				}
			}
		}
	}
	return 0;
}