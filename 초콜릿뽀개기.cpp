#include <iostream>

using namespace std;

int CUT(int, int);

int main(){
	
	int M, N;
	cin >> M;
	cin >> N;
	cout << CUT(M,N);
}

int CUT(int m, int n){
	return (m-1) + m*(n-1);
}
