#include <iostream>

using namespace std;

int calculate(int, int);
int main(){
	int L, U;
	cin >> L >> U;
	printf("%d", calculate(L,U));
}

int calculate(int L, int U){
	int i, sum;
	return L+U;
}
