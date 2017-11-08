#include <iostream>
using namespace std;

int main(){
	char bidang;
	int p,le,lu,a,t;
	cout << "masukkan angka bidang "; cin >> bidang;
		switch(bidang){
			case 'p' :
				cout << " p = "; cin >> p;
				cout << " le = "; cin >> le;
				lu=p*le;
				cout << " lu p adalah " << lu;
				break; // untuk mengakhiri kondisi percabangan
			case 's' :
				cout << " a = "; cin >> a;
				cout << " t = "; cin >> t;
				lu=0.5*a*t;
				cout << " lu s adalah " << lu;
				break;
			default :
				cout << " eror " << endl;
		}
		return 0;
}
