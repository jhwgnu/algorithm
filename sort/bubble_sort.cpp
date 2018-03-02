#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

vector<int> bubble_sort(vector<int> arr){
	int i, j, temp;
	for(i=0; i<arr.size()-1; i++){
		for(j=i+1; j<arr.size(); j++){
			if(arr[i]>arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
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
	print_vector(bubble_sort(A));
	vector<int> B = {123,52,1,7,87,9,44,234,65,8,64};
	print_vector(bubble_sort(B));	
}
