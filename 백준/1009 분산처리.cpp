#include <iostream>

using namespace std;

void calculate(int, int);

int main(){
	int n, a, b, i;
	cin >> n;
	
	for (i=0; i<n; i++){
		cin >> a >> b;
		calculate(a,b);
	}
}

void calculate(int a, int b){
	int j, k, result;
	k = b%4;
	result = 1;	
	for(j=0; j<k; j++){
		result = result*a;
	}
	result = result % 10; 
	cout << result << endl;
}
