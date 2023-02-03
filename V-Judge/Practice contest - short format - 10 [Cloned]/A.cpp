#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n, y;
	cin>>n;
	while(n--){
		cin>>y;
		if (y%400==0)
		{
			cout<<"February 29"<<endl;
		}
		else if(y%4==0 && y%100!=0){
			cout<<"February 29"<<endl;
		}
		else
			cout<<"March 1"<<endl;
	}
	return 0;
}