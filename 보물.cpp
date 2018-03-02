#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n, i, temp;
	vector<int> A;
	vector<int> B;
	
	cin >> n;
	for (i=0; i<n; i++){
		cin >> temp;
		A.push_back(temp);
	}
	for (i=0; i<n; i++){
		cin >> temp;
		B.push_back(temp);
	}
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	reverse(B.begin(), B.end());
	
	int result = 0; 
	for (i=0; i<n; i++){
		result += A[i]*B[i];
	}
	cout << result;
}
