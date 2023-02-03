#include<bits/stdc++.h>
using namespace std;

#define ll       long long int
#define ull      unsigned ll
#define pii      pair<int, int>
#define pll      pair<ll, ll>
#define mp       make_pair
#define pb       push_back
#define gcd      _gcd
#define str_int  stoi
#define sz(x)    (int) x.size()
#define endl     "\n"
#define yes      cout<<"YES"<<endl;
#define no       cout<<"NO"<<endl;
#define all(v)   v.begin(), v.end()
#define mxv(v)   *max_element(v.begin(), v.end())
#define mnv(v)   *min_element(v.begin(), v.end())
const int MOD =  (int)1e9 + 7;

void displayAdjList(list<int> adj_list[], int v) {
	for (int i = 1; i < v; i++) {
		cout << adj_list[i].size() << " ";
		adj_list[i].sort();
		list<int> :: iterator it;
		for (it = adj_list[i].begin(); it != adj_list[i].end(); ++it) {
			cout << *it << " ";
		}
		cout << endl;
	}
}
void add_edge(list<int> adj_list[], int u, int v) {    //add v into the list u, and u into list v
	adj_list[u].push_back(v);
	adj_list[v].push_back(u);
}
main(int argc, char* argv[]) {
	int n, m;
	cin >> n >> m;
	n++;
	list<int> adj_list[n];
	while (m--) {
		int a, b;
		cin >> a >> b;
		add_edge(adj_list, a, b);
	}

	displayAdjList(adj_list, n);
}