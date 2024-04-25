#include <iostream>
#include <cmath>
using namespace std;

int IkilikToOnluk(int ikilik){
	int onluk = 0,katsayi = 0;
	
	while(ikilik > 0){
		
		int rakam = ikilik % 10;
		onluk += rakam * pow(2, katsayi);
		++katsayi;
		ikilik /= 10;
	
	}
	return onluk;
}

int main(int argc, char** argv) {
	int ikilikSayi;
	
	cout << "Ikilik tabaninda sayiyi girin: ";
	cin >> ikilikSayi;
	
	int onlukSayi = IkilikToOnluk(ikilikSayi);
	
	cout << "Onluk tabanindaki karsiligi: "<< onlukSayi << endl;
	
	return 0;
}
