#include <iostream>
using namespace std;

int main(){
	int tinggi,berat;
	cout << " tinggi = "; cin >> tinggi;
	cout << " berat = "; cin >> berat;
	
	if(berat < tinggi/2.5){
		cout << " Underweight/kurus ";
	}else if (tinggi/2.5 <= berat && berat <= tinggi/2.3){
		cout << " Normal ";
	}else if (tinggi/2.3 < berat){
		cout << " Overweight/gendut ";
	}
	
}
