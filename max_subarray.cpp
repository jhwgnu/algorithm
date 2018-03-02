#include <iostream>
#include <typeinfo>
using namespace std;

int* max_subarray(int* arr){
	int *A = new int[3];
	A[0] = 10;
	return A;
}

int main(){
	int arr[10] = {32, -77, 34, 2, 56, -21, 55, 7, -99, 100};
	int* B = max_subarray(arr);
	for (int i=0; i<3; i++){
		cout << *(B+i) << endl;
	}	
}
