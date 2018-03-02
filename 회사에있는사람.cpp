#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int n, i;	
	string name, inout;
	vector<pair<string, string>> logs;
	vector<string> present;
	
	cin >> n;
	cin.ignore(256, '\n');
	
	for(i=0;i<n;i++){
		cin >> name >> inout;
		logs.push_back(make_pair(name, inout));
	} cout << endl;
		
	sort(logs.begin(), logs.end());
	
	for (auto e: logs) {
		cout << e.first << " " << e.second << endl;
	} cout << endl;
	
	for (i=0; i<logs.size()-1; i++){
		if(logs[i].first != logs[i+1].first){
			if(logs[i].second == "enter") present.push_back(logs[i].first);			
			if(i==logs.size()-2) present.push_back(logs[i+1].first);
		} else if(i==logs.size()-2){
			cout << "test" << i << endl;
			if(logs[i].second == "leave") {
				cout << "??" << endl;
				present.push_back(logs[i].first);	
			}
		}
	}
	
	reverse(present.begin(), present.end());
		
	for (auto e: present){
		cout << e << endl;
	}
}
