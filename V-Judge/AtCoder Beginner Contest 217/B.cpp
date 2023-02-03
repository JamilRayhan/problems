#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0, d = 0, x = 3;
	string s;
	while (x--) {
		cin >> s;
		if (s == "ABC")
		{
			a = 1;
		}
		if (s == "ARC")
		{
			b = 1;
		}
		if (s == "AGC")
		{
			c = 1;
		}
		if (s == "AHC")
		{
			d = 1;
		}
	}
	if (a == 0) cout << "ABC" << endl;
	else if (b == 0) cout << "ARC" << endl;
	else if (c == 0) cout << "AGC" << endl;
	else if (d == 0) cout << "AHC" << endl;

}
