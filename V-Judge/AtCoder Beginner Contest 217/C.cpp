#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,d=0;
	cin>>n;
	int q=n;
	int arr[n+5];

	while(n--){
		int p;
		cin>>p;
		d=d+1;
		arr[p]=d;
	}
	//cout<<n;
	for(int i = 1; i<=q ;i++){
        cout<<arr[i]<<" ";
	}
}
