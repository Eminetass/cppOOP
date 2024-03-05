#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char** argv) {
	int sayi1,sayi2;
	int sonuc=1;
	cout<<"tabani giriniz: ";
	cin>>sayi1;
	cout<<"ussu giriniz: ";
	cin>>sayi2;
	for(int i=1;i<=sayi2;i++){
		sonuc=sonuc*sayi1;
	}
	cout<<"sonuc: "<<sonuc<<endl;
	cout<<"-----------------"<<endl;
	char ad[20];
	cout<<"isminizi giriniz: ";
	cin>>ad;
	cout<<"karakter uzunluk: "<<strlen(ad);
	return 0;
}
