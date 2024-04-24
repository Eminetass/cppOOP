#include <iostream>
#include <string>
using namespace std;

int main() {
    string metin;
    
    cout << "Bir metin girin: ";
    getline(cin, metin);
    
    int uzunluk = metin.length();
    
    cout << "Metnin tersi: ";
    for (int i = uzunluk - 1; i >= 0; --i) {
        cout << metin[i];
    }
    cout << endl;
    
    return 0;
}
