#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<int, pair<int, int>>> edges;
int parent[100000];

int find(int x){
	if(parent[x]==x) return x;
	return find(parent[x]);
}

void unite(int x, int y){	
    parent[find(x)] = find(y);
}

int main(){
	int v, e, i, v1, v2, w;	
	for (i=0; i<100000; i++){
		parent[i] = i;
	}
	cin >> v >> e;			
	for (i=0; i<e; i++){
		cin >> v1 >> v2 >> w;
		edges.push_back(make_pair(w, make_pair(v1,v2)));
	}
	sort(edges.begin(), edges.end());	
	int sum = 0;
	for (auto e: edges){
		v1 = e.second.first;
		v2 = e.second.second;
		w = e.first;
		if(find(v1)!=find(v2)){
			unite(v1,v2);
			sum += w;			
		}
	}
	cout << sum;	
}
