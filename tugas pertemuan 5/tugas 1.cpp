#include <iostream>
using namespace std;
    //mendeklarasikan variabel-variabel
    int bil;
    int bilgenap = 0;
    int bilganjil = 0;
    int bilprima = 0;
//pengimplementasian fungsi pada bagian bilangan genap
void genap() {
    cout << "Bilangan genap dari 1 hingga " << bil << " adalah: ";
    for (int a = 1; a <= bil; a++) {
        if (a % 2 == 0) {
            cout << a << " ";
            bilgenap++;
        }
    }
}
void faktorgenap() {
    cout << "Faktor-faktor dari jumlah bilangan genap tersebut adalah: ";
    for (int i = 1; i <= bilgenap; i++) {
        if (bilgenap % i == 0) {
            cout << i << " ";
        }
    }
}
//pengimplementasian fungsi pada bagian bilangan ganjil
void ganjil() {
    cout << "Bilangan ganjil dari 1 hingga " << bil << " adalah: ";
    for (int b = 1; b <= bil; b++) {
        if (b % 2 != 0) {
            cout << b << " ";
            bilganjil++;
        }
    }
}
void faktorganjil() {
    cout << "Faktor-faktor dari jumlah bilangan ganjil tersebut adalah: ";
    for (int i = 1; i <= bilganjil; i++) {
        if (bilganjil % i == 0) {
            cout << i << " ";
        }
    }
}
//pengimplementasian fungsi pada bagian bilangan prima
void prima() {
    cout << "Bilangan prima dari 1 hingga " << bil << " adalah: ";
    for (int c = 2; c <= bil; c++) {
        int x = 1;
        for (int y = 2; y * y <= c; y++) {
           if (c % y == 0) {
               x = 0;
               break;
           }
        }
            if (x == 1) {
                cout << c << " ";
                bilprima++;
            }
        }
}
void faktorprima() {
   cout << "Faktor-faktor dari jumlah bilangan prima tersebut adalah: ";
    for (int i = 1; i <= bilprima; i++) {
        if (bilprima % i == 0) {
            cout << i << " ";
        }
    }
}

int main() {
    cout << "Program Penentuan Bilangan Genap, Ganjil, dan Prima" << endl;
    cout << "Masukkan Batas Bilangan Positif: "; //melakukan perintah untuk menginput batas bilangan
    cin >> bil;

    cout << endl;
    genap (); //melakukan pemanggilan terhadap fungsi genap
    cout << endl;
    cout << "Jumlah semua bilangan genap dari 1 hingga " << bil << " adalah: " << bilgenap;
    cout << endl; //menampilkan hasil atau output jumlah atau banyaknya bilangan genap dari 1 hingga batas bilangan
    faktorgenap (); //melakukan pemanggilan terhadap fungsi faktorgenap

    cout << endl << endl;
    ganjil (); //melakukan pemanggilan terhadap fungsi ganjil
    cout << endl;
    cout << "Jumlah semua bilangan ganjil dari 1 hingga " << bil << " adalah: " << bilganjil; //menampilkan hasil atau output jumlah atau banyaknya bilangan ganjil dari 1 hingga batas bilangan
    cout << endl;
    faktorganjil (); //melakukan pemanggilan terhadap fungsi faktorganjil

    cout << endl << endl;
    prima (); //melakukan pemanggilan terhadap fungsi prima
    cout << endl;
    cout << "Jumlah semua bilangan prima dari 1 hingga " << bil << " adalah: " << bilprima; //menampilkan hasil atau output jumlah atau banyaknya bilangan prima dari 1 hingga batas bilangan
    cout << endl;
    faktorprima (); //melakukan pemanggilan terhadap fungsi faktorprima
    return 0;
}
