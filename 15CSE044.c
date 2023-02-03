#include<bits/stdc++.h>
using namespace std;



int sc1() {int x; scanf("%d", &x); return x;}
long long sc2() {long long x; scanf("%lld", &x); return x;}

const int mod= 1e9 + 7;
inline int add(int a, int b) {a += b; return a >= mod ? a - mod : a;}
inline int sub(int a, int b) {a -= b; return a < 0 ? a + mod : a;}
inline int mul(int a, int b) {return (long long)a * b % mod;}


#define F               first
#define S               second
#define mp              make_pair
#define pb              push_back
#define pf              push_front
#define speed_up        ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define sz(x)           (int)x.size()
#define all(x)          x.begin(), x.end()
#define debug           cerr << "OK\n";
#define ub              upper_bound
#define lb              lower_bound
#define gcd(a,b)        __gcd(a,b)
#define lcm(a,b)        (a*b)/gcd(a,b)
#define Int             sc1()
#define LL              sc2()
#define For(n)          for(int i=0;i<n;i++)
#define Forj(n)         for(int j=0;j<n;j++)
#define Fork(n)         for(int k=0;k<n;k++)
#define For1(n)         for(int i=1;i<=n;i++)

typedef long long       ll;
typedef vector<int>     vi;
typedef vector<ll>      vll;
typedef pair<int, int>  pii;
typedef pair<ll, ll>    pll;
typedef vector<pii>     vpii;
typedef set <int>       si;
typedef set <ll>        sll;
typedef multiset <int>  msi;
typedef multiset <ll>   msll;
typedef map <int, int>  mi;
typedef map <ll, ll>    mll;

void err(istream_iterator<string> it) {cout << endl;}
template<typename T, typename... Args> void err(istream_iterator<string> it, T a, Args... args) {
    cerr << *it << " = " << a << ", ";
    err(++it, args...);
}

const int inf           = (int)2e9 + 5;
const ll  Inf           = (ll)1e18 + 5;
const int N             = 5e6 + 5;

struct Customar
{
	int cus_num;
	int AIT;
	int arr_time;
	int ab_ser_beg;
	int ab_ser_time;
	int ab_ser_end;
	int bk_ser_beg;
	int bk_ser_time;
	int bk_ser_end;
	int delay;
	int system_time;
	Customar(){
		ab_ser_beg = 0;
		bk_ser_beg = 0;
		arr_time = 0;
	}
};

int gen_arrival(int x){
	if(x>=1 && x<=25) return 1;
	else if(x>=26 && x<=65) return 2;
	else if(x>=66 && x<=85) return 3;
	else return 4;
}
int able_ser(int x){
	if(x>=1 && x<=30) return 2;
	else if(x>=31 && x<=58) return 3;
	else if(x>=59 && x<=83) return 4;
	else return 5;
}
int beker_ser(int x){
	if(x>=1 && x<=35) return 3;
	else if(x>=36 && x<=60) return 4;
	else if(x>=61 && x<=80) return 5;
	else return 6;
}



int solve() {
	int random_for_arrival[6] = {0, 26, 98, 90, 26, 42};
	int random_for_service[6] = {95, 21, 51, 92, 89, 38};

 	int curr_able = 0;
 	int curr_beker = 0;

 	int n=6;
 	Customar arr[n+1];
 	for(int i=1;i<=n;i++){
 		arr[i].cus_num = i;
 		if(i == 1) arr[i].AIT = 0;
 		else arr[i].AIT = gen_arrival(random_for_arrival[i-1]);

 		arr[i].arr_time+=arr[i-1].arr_time + arr[i].AIT;

 		if(arr[i].arr_time>=curr_able || (arr[i].arr_time<curr_able && curr_able<=curr_beker)){
 			arr[i].ab_ser_beg = max(arr[i].arr_time,curr_able);
 			arr[i].ab_ser_time = able_ser(random_for_service[i-1]);
 			arr[i].ab_ser_end = arr[i].ab_ser_beg + arr[i].ab_ser_time;

 			arr[i].bk_ser_beg = -1;
 			arr[i].bk_ser_time = -1;
 			arr[i].bk_ser_end = -1;

 			arr[i].delay = arr[i].ab_ser_beg - arr[i].arr_time;
 			arr[i].system_time = arr[i].ab_ser_end -arr[i].arr_time;

 			curr_able = arr[i].ab_ser_end;
 		}
 		else{
 			arr[i].bk_ser_beg = max(arr[i].arr_time,curr_beker);
 			arr[i].bk_ser_time = beker_ser(random_for_service[i-1]);
 			arr[i].bk_ser_end = arr[i].bk_ser_beg + arr[i].bk_ser_time;

 			arr[i].ab_ser_beg = -1;
 			arr[i].ab_ser_time = -1;
 			arr[i].ab_ser_end = -1;

 			arr[i].delay = arr[i].bk_ser_beg - arr[i].arr_time;
 			arr[i].system_time = arr[i].bk_ser_end -arr[i].arr_time;

 			curr_beker = arr[i].bk_ser_end;
 		}

 	}
 	printf("No\tAIT\tAr_T\tS_B\tS_t\t S_E\tS_B\tS_T\tS_E\t WT\t ST\n");
 	for(int i=1;i<=n;i++){
 		printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",arr[i].cus_num,arr[i].AIT,arr[i].arr_time,arr[i].ab_ser_beg,arr[i].ab_ser_time,arr[i].ab_ser_end,arr[i].bk_ser_beg,arr[i].bk_ser_time,arr[i].bk_ser_end,arr[i].delay,arr[i].system_time);
 	}
	return 0;
}

int main()
{

	int test = 1, tc = 0;
	while (test--) {
		solve();
	}
	return 0;
}
