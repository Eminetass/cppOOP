#include<iostream>
using namespace std;
// C++ ile oop
// structures(yapılar)
struct Adres{
	string mah;
	string sk;
	string apartman;
	string sehir;
	int kapiNo;
};
struct Kisi{
	string ad;
	string soyad;
	int yas;
	double boy;
	Adres adr;
	
};
int main(){
	
	Kisi nesne1;
	Kisi nesne2;

    nesne1.ad="Emine";
	nesne1.soyad="Tas";
	nesne1.yas=20;
	nesne1.boy=1.69;
	
	nesne1.adr.mah="aykut ozan mah.";
	nesne1.adr.sk="korhan sk.";
	nesne1.adr.apartman="tas apartman";
	nesne1.adr.kapiNo=4;
	nesne1.adr.sehir="Batman sason";
	
	cout<<"nesne1 in bilgileri"<<endl;
	cout<<"ad    :"<<nesne1.ad<<endl;
	cout<<"soyad :"<<nesne1.soyad<<endl;
	cout<<"yas   :"<<nesne1.yas<<endl;
	cout<<"boy   :"<<nesne1.boy<<endl;
	
	
    cout<<nesne1.adr.mah<<endl;
	cout<<nesne1.adr.sk<<endl;
    cout<<nesne1.adr.apartman<<endl;
	cout<<nesne1.adr.kapiNo<<endl;
	cout<<nesne1.adr.sehir<<endl;
	
	std::cout<<"";
	nesne1.ad="Saliha";
	nesne1.soyad="kaplan";
	nesne1.yas=58;
	nesne1.boy=1.62;
		
	
	
	
	
	
	
	
	
	
	
	
	
	












	
	
	return 0;
}
