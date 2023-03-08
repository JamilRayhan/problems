#include<bits/stdc++.h>
using namespace std;

#define ll           long long int
#define ull          unsigned ll
#define pii          pair<int, int>
#define pll          pair<ll, ll>
#define mp           make_pair
#define pb           push_back
#define gcd          __gcd
#define str_int      stoi
#define sz(x)        (int) x.size()
#define endl         "\n"
#define yes          cout<<"YES"<<endl
#define no           cout<<"NO"<<endl
#define all(v)       v.begin(), v.end()
#define mxv(v)       *max_element(all(v))
#define mnv(v)       *min_element(all(v))
#define sumv(v)      accumulate(all(v), 0)
#define cntv(v,e)    count(all(v), e) 
#define rev(v)       reverse(all(v))

const int   MOD =   (int)1e9 + 7;
const double pi =   3.14159265359;

/*lambda functions are anonymous functions 
that can be defined inline, allowing you to 
create a function object without having to 
explicitly define a function.*/
int ArrayPrint(){
	vector<int> nums {rand()%10, rand()%20, rand()%30, rand()%40, rand()%50};

    // Define a lambda function to print out each element of a vector
    auto print = [](int num) { std::cout << num << " "; };

    // Use the for_each algorithm to apply the lambda function to each element of the vector
    for_each(nums.begin(), nums.end(), print);
    cout<<endl;
    return 0;
}
int solve() {
	int a=rand()%50,b=rand()%50;
	cout<<a<<" "<<b<<endl;
    //cout<<[](int x){return x+5;}(n)<<endl;
    auto sum = [](int x,int y){return x+y;};
    //can reuse the code
    cout<<sum(a,b)<<endl;
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
        ArrayPrint();
    }
    return 0;
}