#include <iostream>
using namespace std;
#include "Nokta.h"
int Nokta::i=0;



int main(int argc, char** argv) {
	Nokta n1(0,0);
	Nokta n2(3,4);
	cout<<n1.uzaklikHesapla(n2)<<endl;
    
    Nokta n3(5,2);
    Nokta n4(20,10);
    Nokta n5=n3.topla(n4);
    n5.ekranaYaz();
//  (n3.topla(n4);).ekranayaz(); þeklinde de çýktý alýnýr ancak 1 defa tek kullanýlýr.


	return 0;
}
