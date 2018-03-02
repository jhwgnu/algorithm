#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

vector<int> merge(vector<int> arr, int index){
	if(arr.size()>1){
		
	}
}

vector<int> merge_sort(vector<int> arr){
	if(arr.size()==1) return arr;
	int mid = arr.size()/2;
	
	vector<int> arr_left(arr.begin(), arr.begin() + mid);
	vector<int> arr_right(arr.begin()+mid, arr.end());
	
	vector<int> left_sorted = merge_sort(arr_left);
	vector<int> right_sorted = merge_sort(arr_right);
	
	// merging 2 vectors
	left_sorted.insert(end(left_sorted), begin(right_sorted), end(right_sorted))
	
	return left_sorted;
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
	print_vector(merge_sort(A));
	vector<int> B = {123,52,1,7,87,9,44,234,65,8,64};
	print_vector(merge_sort(B));
}
