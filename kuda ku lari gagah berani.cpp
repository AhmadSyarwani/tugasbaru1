#include <iostream>
#include <string>
using namespace std;

class kuda{
	public:
		void bersuara(string bunyi);
		int jeniskuda;
		string keturunan;
};

int main (){
	kuda kudaponi,zebra,kudalaut,keledai,kudanil;
	
	kudaponi.keturunan = "Badan Nya Kecil= ";
	zebra.keturunan = "Warna Kulit Nya Bergaris Hitam Dan Putih= ";
	kudalaut.keturunan = "Hidup Di Laut= ";
	keledai.keturunan = "Telinga Nya Besar Dan Jalan Nya Lambat= ";
	kudanil.keturunan = "Badan Nya Besar Gigi Nya Besar= ";
	
	cout << (kudaponi.keturunan);
	kudaponi.bersuara("ngihaaaangeee");
	
	cout << (zebra.keturunan);
	zebra.bersuara("hingakhingakhingak");
	
	cout << (kudalaut.keturunan);
	kudalaut.bersuara("Nihil Tidak Bisa DiDengar SuaraNya Karena Dia Ada Di Dalam Air");
	
	cout << (keledai.keturunan);
	keledai.bersuara("ngihok");
	
	cout << (kudanil.keturunan);
	kudanil.bersuara("whoooooooo");
}

void kuda::bersuara(string bunyi){
	cout << "suara nya "<<bunyi<<" !!"<<endl;
}
