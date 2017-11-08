#include <iostream>
using namespace std;

int main(){
	int x,y,z;
	
	cout << " masukkan nilai "; cin >> x;
	cout << " masukkan nilai "; cin >> y;
	
	if (x>y){
		z=x-y;
		cout << " nilai x-y " << z;
	}else if (y>x){
		z=y-x;
		cout << " nilai y-x " << z;
	}else {
		cout << " tidak bisa di input ";
	}
}
