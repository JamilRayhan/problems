#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int arr[10],d,e,x=0,y=0;
		for (int i = 0; i < 3; i++)
		{
			cin>>arr[i];

		}
		cin>>d>>e;
		sort(arr,arr+3);
		for (int i = 2; i >=0; i--)
		{
			if (arr[i]<=e)
			{
				x=i;
				break;
			}
			else {
				x=arr[i]+x;
			}
		}
	}
}