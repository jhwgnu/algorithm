#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int calculate(int, int, int, int, int, int);
vector<pair<int,int>> checkCircle(int, int, int);
int distance(int, int, int, int);

int main(){
	int i, n, x1, y1, r1, x2, y2, r2, result;
	
	cin >> n;
	for (i=0; i<n; i++){
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		cout << calculate(x1,y1,r1,x2,y2,r2);
	}	
}

int calculate(int x1, int y1, int r1, int x2, int y2, int r2){
	int count = 0;
	vector<pair<int,int>> onCircle1 = checkCircle(x1,y1,r1);
	vector<pair<int,int>> onCircle2 = checkCircle(x2,y2,r2);
	
	sort(onCircle1.begin(), onCircle1.end());
	sort(onCircle2.begin(), onCircle2.end());
	
	cout << "Circle1" << endl;
	for (auto e: onCircle1){
		cout << e.first << e.second << endl;
	} cout << endl;
	
	cout << "Circle2" << endl;
	for (auto e: onCircle2){
		cout << e.first << e.second << endl;
	} cout << endl;
}

vector<pair<int, int>> checkCircle(int x, int y, int r){
	vector<pair<int, int>> result;
	int j, k;
	
	for(j=x-r; j<=x+r; j++){
		for(k=y-r; k<=y+r; k++){
			printf("\tcheck(%d,%d)\n",j, k);
			if(distance(x,y,j,k)==r){
				cout << "check"
				result.push_back(make_pair(j,k));
					
			}
			
		}
	}
	return result;
}

int distance(int xa, int ya, int xb, int yb){	
	return sqrt((xa-xb)*(xa-xb) + (ya-yb)*(ya-yb));
}
