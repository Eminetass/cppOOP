#include<iostream>
#include<stdlib.h>
using namespace std;
main{
   setlocale(LC_AAL,"Turkish"); //T�rk�e karakter
   int i,mak;
   int a[5];
   
   for(i=0; i<5; i++){
   	cout<<i+1<<" . Say�: ";
   	cin>>a[i];
   }
   mak=[0];
   for(i=1; i<5; i++){
   	    if(mak<a[i]){
   	   	    mak=a[i];
		}
   }
   cout<< "En Buyuk sayi= "<<mak;
   return 0;

}
