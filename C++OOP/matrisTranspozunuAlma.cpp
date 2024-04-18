#include <iostream>
using namespace std;

int main() {
    int satir, sutun;
    
    cout << "Matrisin satir sayisini girin: ";
    cin >> satir;
    
    cout << "Matrisin sutun sayisini girin: ";
    cin >> sutun;
    
    int matris[satir][sutun];
    
    cout << "Matris elemanlarini girin:" << endl;
    for (int i = 0; i < satir; ++i) {
        for (int j = 0; j < sutun; ++j) {
            cin >> matris[i][j];
        }
    }
    
    cout << "Matris:" << endl;
    for (int i = 0; i < satir; ++i) {
        for (int j = 0; j < sutun; ++j) {
            cout << matris[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "Transpoze Matris:" << endl;
    for (int i = 0; i < sutun; ++i) {
        for (int j = 0; j < satir; ++j) {
            cout << matris[j][i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
