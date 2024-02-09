#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;

class tring{
    int size; 
    char *contents; 
    public:
       tring(); // default constructor 
       
       tring(tring &); // copy constructor
    void set (int, char *); // An ordinary member function
    void print();
};

tring::tring(){  //kurucu fonksiyon
    size = 0; 
	contents = new char[1]; 
    strcpy(contents, ""); 
}
tring::tring(tring &in_object) {// Kopyalayýcý kurucu fonksiyon
    size = in_object.size; 
    contents = new char[strlen(in_object.contents)]; 
    strcpy(contents, in_object.contents); 
} 
void tring::set(int in_size, char *in_data){ 
    size = in_size; 
    delete contents; contents = new char[strlen(in_data)];
    strcpy(contents, in_data);
} 
void tring::print(){
    cout<< contents << " " << size << endl;
} 
int main(int argc, char** argv) {
	tring my_string; 
    my_string.set (8, "string 1"); 
    my_string.print();
    tring other=my_string; // Copy constructor is invoked
    tring more(my_string); // Copy constructor is invoked
    other.print();
    more.print();

	return 0;
}
