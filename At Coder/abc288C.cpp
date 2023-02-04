
#include <bits/stdc++.h>
#include <limits.h>
#include <list>
using namespace std;

class Graph {
	int V;
	list<int>* adj;
	bool isCyclicUtil(int v, bool visited[], int parent);

public:
	Graph(int V);
	void addEdge(int v, int w);
	int isCyclic();
};
Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];
}
void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w);
	adj[w].push_back(v);
}
bool Graph::isCyclicUtil(int v, bool visited[], int parent)
{
	visited[v] = true;
	list<int>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i) {
		if (!visited[*i]) {
			if (isCyclicUtil(*i, visited, v))
				return true;
		}
		else if (*i != parent)
			return true;
	}
	return false;
}

int Graph::isCyclic()
{
	int cnt=0;
	bool* visited = new bool[V];
	for (int i = 0; i < V; i++)
		visited[i] = false;
	for (int u = 0; u < V; u++) {
		if (!visited[u])
			if (isCyclicUtil(u, visited, -1))
				cnt++;
	}
	return cnt;
}

// Driver program to test above functions
int main()
{
	int n,m;
	cin>>n>>m;	
	Graph g1(n);
	while(m--){
		int a,b;
		cin>>a>>b;
		--a,--b;
		g1.addEdge(a, b);
	}
	if(g1.isCyclic()>1)
		cout<<g1.isCyclic()-1<<endl;
	else
		cout<<g1.isCyclic()<<endl;
	return 0;
}
