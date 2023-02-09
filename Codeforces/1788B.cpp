#include<bits/stdc++.h>
using namespace std;


class gfg {
public:
    int sumDigits(int no)
    {
        if (no == 0) {
            return 0;
        }
 
        return (no % 10) + sumDigits(no / 10);
    }
};

int solve() {
	gfg g;
    int n;
    cin>>n;
    int tmp=n/2;
    if (n%2==0)
    {
    	cout<<n/2<<" "<<n/2<<endl;
    	return 0;
    }
    if (abs(g.sumDigits(tmp+1)-g.sumDigits(tmp))<=1)
    {
    	cout<<n/2<<" "<<n/2+1<<endl;
    }
    else{
    	cout<<n/2-4<<" "<<n/2+5<<endl;
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