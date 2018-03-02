#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

vector<int> insertion_sort(vector<int> arr){
	int i, j, temp;
	for(i=1; i<arr.size(); i++){
		for(j=i; j>0; j--){
			if(arr[j-1] > arr[j]){
				temp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	return arr;
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
	print_vector(insertion_sort(A));	
	vector<int> B = {123,52,1,7,87,9,44,234,65,8,64};
	print_vector(insertion_sort(B));	
}
