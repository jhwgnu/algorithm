#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

vector<int> sort(vector<int> arr){
	return {0};
}

void print_vector(vector<int> arr){
	vector<int>::iterator ptr;
	for(ptr=arr.begin(); ptr<arr.end(); ptr++){
		cout << *ptr << " ";
	}
	cout << endl;
}

int main(){
	vector<int> A = {3,4,5,2,1};	
	print_vector(sort(A));
	vector<int> B = {123,52,1,7,87,9,44,234,65,8,64};
	print_vector(sort(B));
}
