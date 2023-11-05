#include <iostream>
using namespace std;

int main() {
    //mendeklarasikan variabel-varianel
    int bil; //variabel batas bilangan
    int bilgenap = 0; //variabel bilangan genap
    int bilganjil = 0; //variabel bilangan ganjil
    int bilprima = 0; //variabel bilangan prima
    cout << "Program Penentuan Bilangan Genap, Ganjil, dan Prima" << endl;
    cout << "Masukkan Batas Bilangan Positif: "; //melakukan perintah untuk menginput batas bilangan
    cin >> bil;

    cout << endl;
    cout << "Bilangan genap dari 1 hingga " << bil << " adalah: "; //menampilkan hasil atau output bilangan genap
    //pengimplementasian perulangan for untuk mendapatkan output bilangan genap dari 1 hingga batas bilangan
    for (int a = 1; a <= bil; a++){
        if (a % 2 == 0){
            cout << a << " ";
            bilgenap++;
        }
    }
    cout << endl;
    cout << "Jumlah semua bilangan genap dari 1 hingga " << bil << " adalah: " << bilgenap; //menampilkan hasil atau output jumlah atau banyaknya bilangan genap dari 1 hingga batas bilangan
    cout << endl;
    cout << "Faktor-faktor dari jumlah bilangan genap tersebut adalah: "; //menampilkan hasil atau output faktor-faktor dari jumlah bilangan genap
    //pengimplementasian perulangan for untuk mendapatkan output faktor dari jumlah bilangan genap
    for (int i = 1; i <= bilgenap; i++){
        if (bilgenap % i == 0){
            cout << i << " ";
        }
    }

    cout << endl << endl;
    cout << "Bilangan ganjil dari 1 hingga " << bil << " adalah: "; //menampilkan hasil atau output bilangan ganjil
    //pengimplementasian perulangan for untuk mendapatkan output bilangan ganjil dari 1 hingga batas bilangan
    for (int b = 1; b <= bil; b++){
        if (b % 2 != 0){
            cout << b << " ";
            bilganjil++;
        }
    }
    cout << endl;
    cout << "Jumlah semua bilangan ganjil dari 1 hingga " << bil << " adalah: " << bilganjil; //menampilkan hasil atau output jumlah atau banyaknya bilangan ganjil dari 1 hingga batas bilangan
    cout << endl;
    cout << "Faktor-faktor dari jumlah bilangan ganjil tersebut adalah: "; //menampilkan hasil atau output faktor-faktor dari jumlah bilangan ganjil
    //pengimplementasian perulangan for untuk mendapatkan output faktor dari jumlah bilangan ganjil
    for (int i = 1; i <= bilganjil; i++){
        if (bilganjil % i == 0){
            cout << i << " ";
        }
    }

    cout << endl << endl;
    cout << "Bilangan prima dari 1 hingga " << bil << " adalah: "; //menampilkan hasil atau output bilangan prima
    //pengimplementasian perulangan for untuk mendapatkan output bilangan prima dari 1 hingga batas bilangan
    for (int c = 2; c <= bil; c++){
        int x = 1;
        for (int y = 2; y * y <= c; y++){
           if (c % y == 0){
               x = 0;
               break;
           }
        }
            if (x == 1){
                cout << c << " ";
                bilprima++;
            }
        }
    cout << endl;
    cout << "Jumlah semua bilangan prima dari 1 hingga " << bil << " adalah: " << bilprima; //menampilkan hasil atau output jumlah atau banyaknya bilangan prima dari 1 hingga batas bilangan
    cout << endl;
    cout << "Faktor-faktor dari jumlah bilangan prima tersebut adalah: "; //menampilkan hasil atau output faktor-faktor dari jumlah bilangan prima
    //pengimplementasian perulangan for untuk mendapatkan output faktor dari jumlah bilangan prima
    for (int i = 1; i <= bilprima; i++){
        if (bilprima % i == 0){
            cout << i << " ";
        }
    }
    return 0;
}
