#include <iostream>
using namespace std;
#define MAX 100

class Queue{
	int arr[MAX];
	int front, rear;
public:
	Queue() {
		front = 0;
		rear = -1;
	}
	void enqueue(int);
	int dequeue();
};

void Queue::enqueue(int num){	
	if(rear >= MAX){
		cout << "queue is full!" << endl;		
	}
	else {
		arr[++rear] = num;
	}
}

int Queue::dequeue(){	
	if(front > rear){
		cout << "queue is empty!!" << endl;
		return 0;
	}
	else {
		return arr[front++];
	}
}

int main(){
	Queue q;
	q.enqueue(50);
	q.enqueue(100);
	cout << q.dequeue() << endl;
	q.enqueue(150);
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;	
}
