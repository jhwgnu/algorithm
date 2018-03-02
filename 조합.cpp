#include <iostream>
#include <vector>
using namespace std;

int main(){
	int i,j,k;
	int NUM = 5;
	for (i=1; i<=NUM-2; i++){		
		for (j=i+1; j<=NUM-1; j++){			
			for (k=j+1; k<=NUM; k++){
				cout << i<< j<< k << endl;
			}
		}
		
	}
	
}
