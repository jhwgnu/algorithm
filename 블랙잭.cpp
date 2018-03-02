#include <iostream>
#include <vector>
using namespace std;

int main(){
	int M, N, i, j, k, temp, sum;
	cin >> N;
	cin >> M;
	vector<int> cards;
	
	for (i=0; i<N; i++){
		cin >> temp;
		cards.push_back(temp);
	}
	
	sum = 0;		
	for (i=0; i<N-2; i++){		
		for (j=i+1; j<N-1; j++){			
			for (k=j+1; k<N; k++){
				temp = cards[i] + cards[j] + cards[k];
				if (temp > M || temp <= sum) continue;
				else if (temp == M){
					sum = temp;
					break;
				}
				else{
					sum = temp;
				}												
			}
		}		
	}
	cout << sum;	
}
