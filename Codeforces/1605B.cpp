#include<bits/stdc++.h>
using namespace std;

int main() {
    int test = 1, tc = 0;
    //Int(test);
   	cin >> test;
    while (test--) {
        int n,k=0;
        cin>>n;
        string s,t;
        cin>>s;
        if (is_sorted(s.begin(),s.end()))
        {
        	cout<<0<<endl;
        	continue;
        }
        cout << 1 << "\n";
        t=s;

        sort(t.begin(),t.end());
        for (int i = 0; i < n; i++)
        {
        	if (s[i]!=t[i])
        	{
        		k++;
        	}
        }
        cout<<k<<" ";
        for (int i = 0; i < n; ++i)
        {
        	if (s[i]!=t[i])
        	{
        		cout<<i+1<<" ";
        	}
        	
        }
        cout<<endl;
    }
    return 0;
}

