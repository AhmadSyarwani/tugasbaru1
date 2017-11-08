#include <iostream>
using namespace std;

int main(){
	int gp=100,jk,gt,p,l;
	cout << " berapa jam kamu masuk kerja "; cin >> jk;
	
	if (jk>40){
		l=jk-40;
		gt=(l*1.5*gp)+(gp*40);
		p=gt*0.15;
		gt=gt-p;
		cout << " ini adalah gajih kamu " << gt;
	}else if (jk<=40){
		gt=(gp*40);
		p=gt*0.15;
		gt=gt-p;
		cout << " ini adalah gajih kamu " << gt;
	}
}
