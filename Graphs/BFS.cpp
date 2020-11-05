#include<bits/stdc++.h>
using namespace std;

class Graph {
	int V;
	list<int> *adj;
public: 
	Graph(int V);
	void addEdge(int v, int w);
	void BFS(int src);
};

Graph :: Graph(int V){
	this->V = V;
	adj = new list<int>[V];
}

void Graph :: addEdge(int v, int w){
	adj[v].push_back(w);
}

void Graph :: BFS(int src){
	vector<bool> visited(V, false);
	
	queue<int> q;
	
	visited[src] = true;
	q.push(src);
	
	list<int>::iterator i; 
	
	while(!q.empty()){
		src = q.front();
		cout << src << " ";
		q.pop();
		
		for(i = adj[src].begin(); i != adj[src].end(); i++){
			if(!visited[*i]){
				visited[*i] = true;
				q.push(*i);
			}
		}
	}
}

int main() { 
	Graph g(4); 
	g.addEdge(0, 1); 
	g.addEdge(0, 2); 
	g.addEdge(1, 2); 
	g.addEdge(2, 0); 
	g.addEdge(2, 3); 
	g.addEdge(3, 3); 
  
	cout << "Following is Breadth First Traversal "
		<< "(starting from vertex 2) \n"; 
	g.BFS(2);
	cout << endl; 
  
	return 0; 
} 
