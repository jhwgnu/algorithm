#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main(){
	int n, temp;
	vector<int> nums;
	cin >> n;
	for (int i=0; i<n; i++){
		scanf("%d", &temp);
		nums.push_back(temp);
	}
	sort(nums.begin(), nums.end());	
	reverse(nums.begin(), nums.end());
	for (auto e: nums){
		printf("%d\n", e);
	}
}
