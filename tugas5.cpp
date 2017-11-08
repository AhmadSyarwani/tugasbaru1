#include <iostream>
using namespace std;

int main(){
	int tinggi,berat;
	cout << " tinggi = "; cin >> tinggi;
	cout << " berat = "; cin >> berat;
	
	if(berat < tinggi/2.5){
		cout << " Underweight/kurus ";
	}
}
