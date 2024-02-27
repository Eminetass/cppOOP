#include<iostream>
using namespace std;
//C++ ile oop
//structures fonksiyonlarla kullanýmý
struct Kisi{
	string ad;
	int yas;
};

void Yazdir(Kisi nesne){
	cout<<"ad  :"<<nesne.ad<<endl;
	cout<<"yas :"<<nesne.yas<<endl;
}
void YazdirReferans( Kisi *ptr){
	cout<<"ad  :"<<ptr->ad<<endl;
	cout<<"yas :"<<ptr->yas<<endl;
}
int main(){
	
	Kisi nes1={"Emine",20};
	
	Yazdir(nes1);
	std::cout<<'\n';
	//YazdirRefrans( &nes1 );
	
	
	return 0;
}
