#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int x,y,z;
		cin>>x>>y>>z;
		if (x+y<=z)
		{
			cout<<"yes"<<endl;
		}
		else
			cout<<"no"<<endl;
	}
	return 0;
}