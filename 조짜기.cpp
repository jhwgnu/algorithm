#include <iostream>
#include <string>
#include <vector> 
#include <algorithm>
#include <math.h>

using namespace std;

int main(){
	string str;
	int num, n;
	cin >> num;
	vector<int> scores;
	vector<int>::iterator it;
	
	for (int i=0; i<num; i++){
		cin >> n;
		scores.push_back(n);
	}
	
	cout << "num: " << num << endl;
	cout << "scores: ";
	for (auto i: scores){
		cout << i << " ";
	}
	cout << endl;
	
	sort(scores.begin(), scores.end());
	for (auto i: scores){
		cout << i << " ";
	} cout << endl;		
	
	for (it=scores.begin(); it!=scores.end(); it++){
		cout << *it << " ";
	} cout << endl;
	
	int sum = 0;
	for (int i=0; i<num/2; i++){
		sum = sum - scores[i];
	}
	
//	cout << "중간결과: "<< sum << endl;
	
//	int second_start = 
	
	if(num%2==0){
		for (int i=num/2; i<num; i++){
			sum = sum + scores[i];	
		}
	} else {
		for (int i=num/2+1; i<num; i++){
//			cout << scores[i] << "더함 ";
			sum = sum + scores[i];
//			cout << endl;
				
		}
	}
	
	cout << sum;
	
}

