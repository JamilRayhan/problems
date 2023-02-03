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
int solve() {
    int n;
    cin>>n;
    int p[n+5];
    int q[n+5]={0};
    for (int i = 1; i <= n; ++i)
    {
    	cin>>p[i];
    	q[i]=p[i];
    }
    sort(q+1,q+n+1);
    if (n==1)
    {
    	cout<<-1<<endl;
    }
    else{
    	
    	for (int i = 1; i <= n-2; ++i)
    	{
    		if (p[i]==q[i])
    		{
    			int temp=q[i];
    			q[i]=q[i+1];
    			q[i+1]=temp;
    		}
    	}
    	int a=q[n-1],b=q[n];
    	if (q[n]==p[n])
    	{
    		q[n-1]=b;
    		q[n]=a;
    	}
    	if (q[n-1]==p[n-1])
    	{
    		q[n-1]=b;
    		q[n]=a;
    	}
    	for (int i = 1; i <= n; ++i)
    	{
    		cout<<q[i]<<" ";
    	}
    	cout<<endl;
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