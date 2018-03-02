#include <iostream>
using namespace std;
#define MAX 1000

class Stack{
	int top;
	int arr[MAX];
public:
	Stack() {top=-1;}
	int pop();
	void push(int num);
	bool isEmpty();
};

void Stack::push(int num){
	if(top >= MAX){
		cout << "stack overflow!" << endl;
	}
	else{
		arr[++top] = num;
		cout << num << " is pushed" << endl;
	}
}

int Stack::pop(){
	if(top<0){
		cout << "stack underflow!" << endl;
		return 0;
	}
	else {
		cout << arr[top--] << " is popped" << endl;		
	}
}

int main(){
	Stack st;
	st.push(100);
	st.push(150);
	st.push(200);
	st.pop();
	st.pop();
	st.push(300);
	st.pop();
}

