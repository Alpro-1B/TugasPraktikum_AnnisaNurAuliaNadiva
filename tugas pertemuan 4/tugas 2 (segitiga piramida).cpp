#include <iostream>
using namespace std;

int main() {
    //mendeklarasikan variabel
    int a;
    //melakukan perintah untuk menginput tinggi segitiga
    cout << "Input Tinggi Segitiga: ";
    cin >> a;
    //pengimplementasian perulangan for untuk menghasilkan output piramida
    for (int i = 1; i <= a; i++) {
        for (int j = a; j >= i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        for (int l = 2; l <= i; l++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
