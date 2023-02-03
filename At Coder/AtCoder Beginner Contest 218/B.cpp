#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n[30];
	for (int i = 1; i < 27; i++)
	{
		cin>>n[i];
	}
	for (int i = 1; i < 27; i++)
	{
		char  X=n[i]+96;
		cout<<X;
	}
	cout<<endl;
	return 0;
}