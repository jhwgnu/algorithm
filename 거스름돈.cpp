#include <iostream>
using namespace std;

int main(){
	int total, n500, n100, n50, n10, n5, n1;
	cin >> total;	
	total = 1000 - total;
	
	n500 = total/500;
	total = total % 500;
	
	n100 = total/100;
	total = total % 100;
	
	n50 = total/50;
	total = total % 50;
	
	n10 = total/10;
	total = total % 10;
	
	n5 = total/5;
	total = total % 5;
	
	n1 = total;
	
	cout << n500 + n100 + n50 + n10 + n5 + n1;	 
}
