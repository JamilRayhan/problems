#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
	// your code goes here
	
	int t; cin>>t;
	while(t--)
	{
	    ll A, B, C, D; 
	    cin>>A>>B>>C>>D;
	    A%=B, C%=D;
	    if((A+1)%B==(C+1)%D) 
	        cout<<"1\n";
	    else 
	    {
	        ll ans=B*D/__gcd(B, D)-A;
	        cout<<ans<<"\n";
	    }
	}
	
	
	return 0;
}