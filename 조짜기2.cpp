#include <iostream>
#include <string>
#include <vector> 
#include <algorithm>
#include <math.h>
#include <bitset>

using namespace std;

int main(){
	string str;
	int num, n;
	cin >> num;
	vector<int> scores;
//	vector<int> partition;	 
	vector<int>::iterator it;
	
	for (int i=0; i<num; i++){
		cin >> n;
		scores.push_back(n);
	}
	
	cout << "num: " << num << endl;
	cout << "scores: ";
	for (auto i: scores){
		cout << i << " ";
	}
	cout << endl;
	
	
	string binary = bitset<num-1>(5).to_string(); //to binary
    cout<<binary<<"\n";
	
	
}

