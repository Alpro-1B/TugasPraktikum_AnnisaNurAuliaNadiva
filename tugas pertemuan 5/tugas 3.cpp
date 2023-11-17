#include <iostream>
using namespace std;

//pengimplementasian fungsi rekursi
int fibonacci (int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return (fibonacci (n-1) + fibonacci (n-2));
    }
}

int main() {
    //mendeklarasi variabel-variabel
    int n, a, j = 0;
    //melakukan perintah untuk menginput batas bilangan
    cout << "Masukkan Batas Bilangan: "; cin >> n;
    //menampilkan hasil atau output
    cout << "Bilangan Fibonacci: ";
    cout << endl;
    //pengimplementasian perulangan for untuk mendapatkan output bilangan fibonacci
    for (int a = 1; a <= n; a++) {
        cout << "f" << a << ": ";
        cout << fibonacci (j) << endl; //melakukan pemanggilan terhadap fungsi fibonacci
        j++;
    }
    return 0;
}
