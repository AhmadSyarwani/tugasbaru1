#include <iostream>
using namespace std;

int main(){
	int angka;
	cout << " masukkan angka "; cin >> angka;
	
	if (angka > 0){
		cout << angka << " ini bilangan positif ";
	}else if (angka < 0){
		cout << angka << " ini bilangan negatif ";
	}else if (angka == 0){
		cout << angka << " = 0 ";
	}
}
