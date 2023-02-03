#include<bits/stdc++.h>
#define ll long long
#define ff first 
#define ss second
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
	 ll t;
	 cin>>t;
	 while(t--)
	 {
	   ll n;
	   cin>>n;
	   ll a[n+1];
	   map<ll,ll> m;
	   set<ll> s;
	   vector<ll> v;
	   for(int i=1;i<=n;i++)
	   {
	   	 cin>>a[i];
	   	  m[a[i]]++;
	   	  s.insert(a[i]);
	   }
	   ll mx=0,as;
	   for(int i=1;i<=n;i++)
	   {
	   	 if(m[a[i]]>mx)
	   	 {
	   	 	 as=m[a[i]];
	   	 	 mx=as;
	   	 }
	   }
	   if(s.size()==1) cout<<0<<endl;
	   else 
	   {
	   	  for(auto &ii: s)
	   	  	v.push_back(ii);
	   	  sort(v.begin(), v.end());
	   	  vector<ll> ans;
	   	  for(int i=0;i<v.size()-1;i++)
	   	  {
             if((v[i]^v[i+1])<=1)
             {
             	ans.push_back(n-(m[v[i]]+m[v[i+1]]));
             }
	   	  }
	   	  ans.push_back(n-as);
	   	  sort(ans.begin(), ans.end());
	   	  cout<<ans[0]<<endl;
	   }

	 }


    return 0;
	}