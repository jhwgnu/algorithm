#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Edge{
public:
	Edge(int, int, int);	
	void printEdge();
	int v1;
	int v2;
	int w;
};

static vector<Edge*> edges;

Edge::Edge(int _v1, int _v2, int _w) : v1(_v1), v2(_v2), w(_w){	
	edges.push_back(this);
}

void Edge::printEdge(){
	cout << "v1: " << this->v1 << " ";
	cout << "v2: " << this->v2 << " ";
	cout << "w: " << this->w << endl;
}

void printAll(){
	for (auto e: edges){
		e->printEdge();
	}
}

int main(){
	int v, e, i, vertex1, vertex2, weight;
	cin >> v;
	cin >> e;
	
	for (i=0; i<e; i++){
		cin >> vertex1;
		cin >> vertex2;
		cin >> weight;
		Edge newEdge(vertex1, vertex2, weight);		
	}
	printAll();
}
