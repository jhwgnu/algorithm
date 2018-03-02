#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int n, temp;
	vector<int> nums;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> temp;
		nums.push_back(temp);
	}
	sort(nums.begin(), nums.end());
	for (auto e: nums){
		cout << e << endl;
	}
}
