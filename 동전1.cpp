#include <iostream>
#include <vector>
using namespace std;

static vector<int> coins;
int COUNT(int);

int main(){
	int n, k, i, temp;
	cin >> n;
	cin >> k;
		
	for (i=0; i<n; i++){
		cin >> temp;
		coins.push_back(temp);
	}
	sort(coins.begin(), coins.end());
		
	COUNT(k);
	
}

int COUNT(int NUM){
	

	
	return 0;
}

