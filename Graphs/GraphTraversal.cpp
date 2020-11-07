#include<bits/stdc++.h>
using namespace std;

class Graph {
	int V;
	vector<int> *adj;
	void DFSHelper(int v, vector<bool>& visited);
public: 
	Graph(int V);
	void addEdge(int v, int w);
	void BFS(int src);
	void DFS();
};

Graph :: Graph(int V){
	this->V = V;
	adj = new vector<int>[V];
}

void Graph :: addEdge(int v, int w){
	adj[v].push_back(w);
}

void Graph :: BFS(int src){
	vector<bool> visited(V, false);
	
	queue<int> q;
	
	visited[src] = true;
	q.push(src);
	
	vector<int>::iterator i; 
	
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

void Graph :: DFSHelper(int v, vector<bool>& visited){
	visited[v] = true;
	cout << v << " ";
	
	vector<int>::iterator i; 
	for(i = adj[v].begin(); i != adj[v].end(); ++i) {
		if(!visited[*i]) {
			DFSHelper(*i, visited);
		}
	}
}

void Graph :: DFS(){
	vector<bool> visited(V, false);
	
	for(int i = 0; i < V; i++){
		if(visited[i] == false){
			DFSHelper(i, visited);
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
		<< "(starting node = 2): "; 
	g.BFS(2);
	cout << endl; 
	
	cout << "Following is Depth First Traversal: "; 
	g.DFS();
	cout << endl; 
  
	return 0; 
} 
