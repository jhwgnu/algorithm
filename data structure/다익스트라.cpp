#include <iostream>
#include <vector>
using namespace std;

int* d = NULL;
vector<pair<pair<int, int>, int>> roads;

void print_routes();
void process(int);

int main(){
	int city_num, road_num, i, start, end, length;
		
	cout << "도시 개수: ";
	cin >> city_num;
	cout << "경로 총 개수: ";
	cin >> road_num;
	d = new int[city_num+1];
	
	cout << "경로 입력" << endl;
	////////////////////////////////////////////////////////////
	for(i=0; i<road_num; i++){
		cin >> start >> end >> length;
		roads.push_back(make_pair(make_pair(start, end), length));
	}
	
	cout << "###############################" << endl;	
	for(auto e: roads){
		printf("%d -> %d : %d\n", e.first.first, e.first.second, e.second);
	}
	cout << "###############################" << endl;
	/////////////////////////////////////////////////////////////
	
	d[1] = 1;
	for(i=2; i<=city_num; i++){
		d[i] = -1;
	}
	
	for(i=1; i<=city_num; i++){
		process(i);
	}
	print_routes();
	
	delete[] d;
	d = NULL;
}

void process(int n){	
	for(auto e: routes){
		if(e.first.first==n){
			if(e.second < )
		}
	}
}
void print_routes(){
	
}
