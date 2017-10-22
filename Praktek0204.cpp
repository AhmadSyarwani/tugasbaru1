#include <iostream>
using namespace std;

int main(){
	double LuasRumah =42;
	double LantaiP = 193*1215;
	double Luas1Box = LantaiP*8/1000000;
	
	cout <<"Luas Rumah 			:"<<LuasRumah<<" m2"<<endl;
	cout <<"Luas 1 Box Parket	:"<<Luas1Box<<" m2"<<endl;
	
	double jumlahBoxP,biayaP,biayaPG,totalB;
	jumlahBoxP = LuasRumah/Luas1Box;
	cout <<"Jumlah box paket : "<<jumlahBoxP<<endl;
	biayaP = jumlahBoxP * 500;
	cout <<"Biaya Parket(RP) : "<<biayaP<<endl;
	biayaPG= LuasRumah * 20;
	cout <<"Biaya Pasang(RP) : "<<biayaPG<<endl;
	totalB = biayaP+biayaPG;
	cout << "Total Biaya(RP)	: "<< totalB<<endl;
}
