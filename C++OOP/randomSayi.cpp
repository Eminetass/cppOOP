#include <iostream>
#include <cstdlib>
#include <ctime>   

using namespace std;

int main() {
   
    srand(time(0));
    int rasgeleSayi = rand() % 100 + 1;
    
    cout << "Uretilen rasgele sayi: " << rasgeleSayi << endl;
    
    return 0;
}
