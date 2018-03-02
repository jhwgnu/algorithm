#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main(){
	
	map<string, pair<int, long>> colors;
	
	colors["black"] = make_pair(0,1);
	colors["brown"] = make_pair(1,10);
	colors["red"] = make_pair(2,100);
	colors["orange"] = make_pair(3,1000);
	colors["yellow"] = make_pair(4,10000);
	colors["green"] = make_pair(5,100000);
	colors["blue"] = make_pair(6,1000000);
	colors["violet"] = make_pair(7,10000000);
	colors["grey"] = make_pair(8,100000000);
	colors["white"] = make_pair(9,1000000000);
	
	string color1, color2, color3;
		
	getline(cin, color1);
	getline(cin, color2);
	getline(cin, color3);
		
	cout << (colors[color1].first*10 + colors[color2].first) * colors[color3].second;
	
}
