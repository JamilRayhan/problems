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
    if (n%2==0)
    {
        cout<<n/2<<" "<<n/2<<endl;
        return 0;
    }
    int tmp=n%10;
    if (tmp != 9)
    {
        cout<<n/2<<" "<<n/2+1<<endl;
    }
    else{
        int a=n/2,b=n/2+1;
        while(1){
            int x=abs(g.sumDigits(a)-g.sumDigits(b));
            if (x<=1)
            {
                break;
            }
            a--;
            b++;
        }
        cout<<a<<" "<<b<<endl;
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