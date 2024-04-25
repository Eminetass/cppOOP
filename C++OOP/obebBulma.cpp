#include <iostream>
using namespace std;

int OBEBHesapla(int sayi1,int sayi2){
	while(sayi2 !=0){
		int gecici = sayi2;
		sayi2 = sayi1 % sayi2;
		sayi1 = gecici;
	}
	return sayi1;
}
int main(int argc, char** argv) {
	int sayi1,sayi2;
	
	cout<<"Birinci sayiyi girin: ";
	cin >> sayi1;
	
	cout<<"Ýkinci sayiyi girin: ";
	cin >> sayi2;
	
	int obeb = OBEBHesapla(sayi1,sayi2);
	
	cout << "OBEB: "<<obeb<<endl;
	
	return 0;
}
