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
	
	double Ra1c[5]={(a1c[0]/mc[1]),(a1c[1]/mc[2]),(a1c[2]/mc[3]),(a1c[3]/mc[4]),(a1c[4]/mc[5])};
	double Ra2c[5]={(a2c[0]/mc[1]),(a2c[1]/mc[2]),(a2c[2]/mc[3]),(a2c[3]/mc[4]),(a2c[4]/mc[5])};
	double Ra3c[5]={(a3c[0]/mc[1]),(a3c[1]/mc[2]),(a3c[2]/mc[3]),(a3c[3]/mc[4]),(a3c[4]/mc[5])};
}

