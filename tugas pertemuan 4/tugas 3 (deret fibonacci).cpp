#include <iostream>
using namespace std;

int main() {
    //mendeklarasi variabel-variabel
    int f1 = 0; //variabel untuk bilangan pertama
    int f2 = 1; //variabel untuk bilangan kedua
    int temp = 0; //variabel tambahan
    int n; //variabel untuk batas bilangan

    cout << "Masukkan Batas Bilangan: "; cin >> n; //melakukan perintah untuk menginput batas bilangan
    cout << endl;
    cout << "Bilangan Fibonacci: "; //menampilkan hasil atau output
    cout << f1 << ", ";
    cout << f2 << ", ";
    //pengimplementasian perulangan for untuk mendapatkan output bilangan fibonacci
    for (int a = 3; a <= n; a++) {
        temp = f1 + f2;
        cout << temp;
        if (a != n) {
            cout << ", ";
        }
        f1 = f2;
        f2 = temp;
    }
    return 0;
}
