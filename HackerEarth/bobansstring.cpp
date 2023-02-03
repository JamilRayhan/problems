#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	while(num--){
		string s,t;
		cin>>s>>t;
		int a[26]={0},b[26]={0},cnt=0;
		for(int i=0;i<s.size();i++){
			a[s[i]-'a']++;
		}
		for(int i=0;i<t.size();i++){
			b[t[i]-'a']++;
		}
		for (int i = 0; i < 26; ++i)
		{
			if(a[i]!=b[i]) cnt+=abs(a[i]-b[i]);
		}
		cout<<cnt<<endl;
	}
}