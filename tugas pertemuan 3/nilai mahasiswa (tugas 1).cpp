#include <iostream>
using namespace std;

int main() {

    //mendeklarasikan variabel
    string namaMahasiswa;
    int npmMahasiswa,nilai;
    //heading
    cout << "----------------------------------------" << endl;
    cout << "Selamat Datang di Program Evaluasi Nilai" << endl;
    cout << "----------------------------------------" << endl;
    //output & input
    cout << "Masukkan Nama: ";
    cin >> namaMahasiswa;
    cout << "Masukkan NPM: ";
    cin >> npmMahasiswa;
    cout << "Masukkan Nilai: ";
    cin >> nilai;
    //implementasi logika if dalam evaluasi nilai
    if (nilai > 90){
    cout << "Selamat! Anda mendapatkan nilai A." << endl;
    } else if (nilai > 80) {
    cout << "Anda mendapatkan nilai B." << endl;
    } else if (nilai > 70) {
    cout << "Anda mendapatkan nilai C." << endl;
    } else if (nilai > 60) {
    cout << "Anda mendapatkan nilai D." << endl;
    } else {
    cout << "Anda mendapatkan nilai E." << endl;
    }
    return 0;
}
