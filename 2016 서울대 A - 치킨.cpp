#include <iostream>

using namespace std;

int vip(int, int, int, int);
int normal(int, int, int, int);

int main(){
	int test, price, money, free, coupon;
	cin >> test;
	
	for (int i=0; i<test; i++){
		cin >> price >> money >> free >> coupon;
		printf("%d\n", vip(price,money,free,coupon) - normal(price,money,free,coupon));
	}
}

int normal(int p, int m, int f, int c){
	int chickens, coupon;	
	chickens = m/p;
	coupon = chickens*c;
	chickens += coupon/f;	
	return chickens; 
}

int vip(int p, int m, int f, int c){
	int chickens, coupon, bonus;	
	chickens = m/p;
	coupon = chickens*c;
	
	while(coupon>=f){
		bonus = coupon / f;
		chickens += bonus;
		coupon = coupon % f;
		coupon += bonus * c;
	}
		
	return chickens;
}

