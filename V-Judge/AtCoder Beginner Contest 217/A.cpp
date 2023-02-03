#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s,t;
	int a;
	cin>>s>>t;
	a=s.size();
	for(int i=0;i<=a;i++){
		if (s[i]>t[i])
		{
			cout<<"No"<<endl;
			return 0;
		}
	}
	cout<<"Yes"<<endl;
	return 0;
}

