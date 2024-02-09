#include <iostream>
using namespace std;
#include <math.h>
class rasyonelSayi{ // rasyonel sayilari modelleyen sinif tanimi
    int pay,payda;
    public:
    rasyonelSayi(int, int);
    void print(); 
};
rasyonelSayi::rasyonelSayi(int py, int pyd) { // kurucu fonksiyon
   pay=py;
   if (pyd==0) payda=1; 
   else payda=pyd; }
void rasyonelSayi::print(){
cout<<pay<<“ ”<<payda;
}

class karmasikRasyonel { // rasyonel sayilar
    rasyonelSayi reel,sanal ; // nesne uyeler
    public:
    karmasikRasyonel(int,int); // kurucu fonksiyon
    void print();
}; 
karmasikRasyonel::karmasikRasyonel(int r,int i):real(r,1),img(i,1){ : }
void karmasikRasyonel::print(){
    reel.print(); 
    sanal.print();  }
int main(int argc, char** argv) {
	karmasikRasyonel karmasik(2,5);
	karmasik.print();

	return 0;
}
