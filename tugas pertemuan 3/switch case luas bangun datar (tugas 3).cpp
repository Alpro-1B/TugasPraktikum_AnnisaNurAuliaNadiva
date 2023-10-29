#include <iostream>
using namespace std;

int main() {
 //mendeklarasikan variabel
 int pil; //pilihan opsi
 float luas,p,l,a,t,s; //panjang, lebar, alas, tinggi, sisi
    //heading
    cout << "----------------------------------------" << endl;
    cout<<"Selamat Datang di Program Menghitung Luas Bangun Datar"<<endl;
    cout << "----------------------------------------" << endl;
    cout<<"1. Persegi"<<endl;
    cout<<"2. Persegi Panjang"<<endl;
    cout<<"3. Segitiga"<<endl;

    cout<<"Silakan Pilih: ";
    cin>>pil;
    //outpu & input serta implementasi switch case
 switch (pil)
 {
    case 1:
    cout<<"Menghitung Luas Persegi"<<endl;
    cout<<"Masukkan Sisi: ";cin>>s;
    cout<<endl;
    luas = s * s;
    cout<<"Luas Persegi: "<<luas;
    break;

    case 2:
    cout<<"Menghitung Luas Persegi Panjang"<<endl;
    cout<<"Masukkan Panjang: ";cin>>p;
    cout<<endl;
    cout<<"Masukkan Lebar: ";cin>>l;
    luas = p * l;
    cout<<endl;
    cout<<"Luas Persegi Panjang: "<<luas;
    break;

    case 3:
    cout<<"Menghitung Luas Segitiga"<<endl;
    cout<<"Masukkan Alas: ";cin>>a;
    cout<<endl;
    cout<<"Masukkan Tinggi: ";cin>>t;
    cout<<endl;
    luas = a * t / 2;
    cout<<endl;
    cout<<"Luas Segitiga: "<<luas;
    break;

    default:
    cout<<"Pilihan Tidak Valid"<<endl;
    break;
}
    return 0;
}
