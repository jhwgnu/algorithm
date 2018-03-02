#include <iostream> 
#include <vector>
#include <string>
using namespace std;

string DESTINATION(int**, vector<string>);

int main(){
	int t, n, k;
	// t: testcases
	// n: num of airports
	// k: num of trips
	int i, j, m; // forloop indexes
	int** routes = NULL;
	vector<string> airports;
	string airport;
	
	cin >> t;
	for(i=0; i<t; i++){
		cin >> n >> k;
		cin.ignore(256, '\n');
		
		// input airport names
		for(j=0; j<n; j++){			
			getline(cin, airport);			
			airports.push_back(airport);
		}
		
		// assign 2d array
		routes = new int*[n];
		for(j=0; j<n; j++){
			routes[j] = new int[n];
		}
		
		// fill in the array
		for(j=0; j<n; j++){
			for(m=0; m<n; m++){
				cin >> routes[j][m];
			}
		}
		
		cout << DESTINATION(routes, airports) << endl;
		
		delete [] routes;
		routes = NULL;
		airports.clear();
	}
}

string DESTINATION(int** routes, vector<string> airports){
	int n = airports.size();
	int i,j,m;
	
	return "hi";
}
