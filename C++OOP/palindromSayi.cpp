#include <iostream>
using namespace std;

bool PalindromSayiMi(int sayi) {
    int tersSayi = 0, gecici = sayi;
    
    while (gecici > 0) {
        int rakam = gecici % 10;
        tersSayi = tersSayi * 10 + rakam;
        gecici /= 10;
    }
    
    return sayi == tersSayi;
}

int main() {
    int sayi;
    
    cout << "Bir sayi girin: ";
    cin >> sayi;
    
    if (PalindromSayiMi(sayi)) {
        cout << sayi << " palindrom bir sayidir." << endl;
    } else {
        cout << sayi << " palindrom bir sayi degildir." << endl;
    }
    
    return 0;
}
