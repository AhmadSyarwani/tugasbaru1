#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	cout.setf(ios::fixed); cout.setf(ios::showpoint); cout.precision(4);
	
	double a1c[5]={4,4,5,3,3}; double a2c[5]={3,3,4,2,3}; double a3c[5]={5,4,2,2,2};
	
		cout << "MATRIKS X : "<<endl;
	for(int i=0;i<5;i++){
		cout << a1c[i]<<" | ";
	}cout<<endl;
	for(int i=0;i<5;i++){
		cout << a2c[i]<<" | ";
	}cout<<endl;
	for(int i=0;i<5;i++){
		cout << a3c[i]<<" | ";
	}
	
	cout <<endl<<endl<< "MATRIKS R : "<<endl;

	double mc[5];
	for(int i=0;i<5;i++){
		mc[i+1]=max(a1c[i],max(a2c[i],a3c[i]));
	}
}

