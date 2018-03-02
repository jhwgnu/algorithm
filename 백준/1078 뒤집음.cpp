#include <iostream>
using namespace std;
int reverse(int);

int main(){
	int num;
	bool found = false;
	cin >> num;
	
	for (int i=0; i<10000000; i++){
		if(i-reverse(i)==num){
			cout << i;
			found = true;
			break;
		}
	}
	if(!found) cout << -1;
}

int reverse(int n){
	int result = 0;
	while(n>0){
		result *= 10;
		result += n % 10;
		n = n / 10;
	}
	return result;
}
