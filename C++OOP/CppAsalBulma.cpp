#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int sayi;
    int sayac=0;
    cout<<"BIR SAYI GIRINIZ:";
 
    cin>>sayi;
    if(sayi<=1){
	   cout<<"ASAL DEGILDIR."<<endl;
    }
    else{
       for(int j=2; j<sayi; j++){
           if(sayi % j == 0){
               sayac++;
                break;
            }
        }
       if(sayac == 0)
       {
        cout<<"ASALDIR."<<endl;
        }
       else
       cout<<"ASAL DEGILDIR."<<endl;
    }
	return 0;
}
