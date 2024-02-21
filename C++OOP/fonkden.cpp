#include <iostream>

void uyari(){
	std::cout<<"yanlis sifre girdiniz!!!";
}

void mesaj(char msg,char msg2){
    uyari();
    std::cout<<'\n';
	std::cout<<msg<<msg2;
}

int topla(int sayi1,int sayi2){
    std::cout<<"int";
    std::cout<<'\n';
	return sayi1+sayi2;
}

double topla(double sayi1,double sayi2){
	std::cout<<"double";
	return sayi1+sayi2;
}
int carpim(int sayi3,int sayi4);


int main(int argc, char** argv) {
	
	uyari();
	std::cout<<'\n';
	mesaj('A','B');
	std::cout<<'\n';
	std::cout<<topla(5,7);
	std::cout<<'\n';
	
	int a=9;
	int b=4;
	std::cout<<carpim(a,b);
	std::cout<<'\n';
	
	
	double c=8.12;
	double d=7.18;
	std::cout<<topla(c,d);
	std::cout<<'\n';
	
	std::cout<<topla(false,true);
	
	
	return 0;
}

int carpim(int sayi3,int sayi4){
	return sayi3*sayi4;
}


