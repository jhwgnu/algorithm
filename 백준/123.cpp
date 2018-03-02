#include <iostream>

using namespace std;

int PARSE(int);

int main(){
	
	int N;	
	cin >> N;
	cout << PARSE(N);
}

/*
	f(1)
	1

	f(2)
	1 1
	2
	
	f(3)
	1 1 1
	1 2 
	2 1
	3
	
	f(4)
	1 1 1 1 
	1 1 2
	1 2 1
	2 1 1
	2 2
	1 3
	3 1
	
*/

int PARSE(int n){	
	if (n<1) return 0;
	else if (n==1) return 1;
	else if (n==2) return 2;
	else if (n==3) return 4;
	else return PARSE(n-3) + PARSE(n-2) + PARSE(n-1);	
}
