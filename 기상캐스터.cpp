#include <iostream>
#include <string>
#include <vector> 
#include <algorithm>

using namespace std;

int main(){
	string str;
	int h, w, i ,j;
	cin >> h >> w;
	vector<vector<int>> grid;
	
	int input;
		
	
	for (i=0; i<h; i++)	{		
		for (j=0; j<w; j++){			
//			cin >> grid[i][j];
			printf("grid[%d][%d]: ", i,j);
			cin >> input;			
			grid[i].push_back(input);
			cout << "test" << endl;
			cout << endl;
		}
	}
	
//	for (i=0; i<h; i++)	{
//		for (j=0; j<w; j++){
//			cout << grid[i][j];
//		}
//		cout << endl;
//	}
}
