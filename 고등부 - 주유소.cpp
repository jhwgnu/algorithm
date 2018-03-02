#include <iostream>
#include <vector>
using namespace std;

int* prices = NULL;
vector<pair<pair<int, int>, int>> roads;

void print_routes();

int main(){
	int city_num, road_num, i, start, end, length;
		
	cin >> city_num >> road_num;
	prices = new int[city_num+1];
	for(i=1; i<=city_num; i++){
		cin >> prices[i];
	}
	
	////////////////////////////////////////////////////////////
	for(i=0; i<road_num; i++){
		cin >> start >> end >> length;
		roads.push_back(make_pair(make_pair(start, end), length));
	}
	
	cout << "#########################################" << endl;
	for(i=1; i<=city_num; i++){
		printf("city %d ±â¸§°ª : %d\n", i, prices[i]);
	} cout << endl;
	
	for(auto e: roads){
		printf("%d <-> %d : %d\n", e.first.first, e.first.second, e.second);
	}
	cout << "#########################################" << endl;
	/////////////////////////////////////////////////////////////
	
	print_routes();
	
	delete[] prices;
	prices = NULL;
}

void print_routes(){
	
}
