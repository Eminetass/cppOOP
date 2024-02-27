#include<iostream>
using namespace std;
//C++ ile oop
//structures(yapýlarýn ) pointerler ile kullanýmý
//
int main(){
    
	int sayi=10,
	int *ptr= &sayi;
	
	cout<<sayi<<endl;
	cout<<*ptr<<endl;
	
	*ptr=20;  //sayi=20;
		
	cout<<sayi<<endl;
	cout<<*ptr<<endl;
	
	
	std::cout<<"-----------------";
	std::cout<<'\n';
	int dizi[5]={10,20,30,40,50};
	int *ptr=dizi;
	ptr[2]=100;
	
	cout<<dizi[2];
	
	
	
	
	return 0;
}
