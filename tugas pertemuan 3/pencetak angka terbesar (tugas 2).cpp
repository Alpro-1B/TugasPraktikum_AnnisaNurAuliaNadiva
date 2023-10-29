#include <iostream>
using namespace std;

int main() {

 int a,b,c; //mendeklarasikan variabel
    //heading
    cout << "----------------------------------------" << endl;
    cout<<"Selamat Datang di Program Pencetak Bilangan Terbesar"<<endl;
    cout << "----------------------------------------" << endl;
    cout<<"Silakan Masukkan Bilangan"<<endl;
    //output & input
    cout<<"Bilangan 1: ";
    cin>>a;
    cout<<"Bilangan 2: ";
    cin>>b;
    cout<<"Bilangan 3: ";
    cin>>c;ss
    //hasil (angka terbesar)
    cout<<"Bilangan Terbesar: ";
    //implementasi logika if
    if (a > b && a > c){
    cout << a << endl;
    }else if (b > a && b > c){
    cout << b << endl;
    }else if (c > a && c > b){
    cout << c << endl;
    }
    return 0;
}
