#include <iostream>
using namespace std;

int main() {

    int firstValue,secondValue;

cout << "Masukkan nilai firstValue: "; cin >> firstValue;
cout << "Masukkan nilai secondValue: "; cin >> secondValue;
cout << endl;

cout << "Sebelum ditukar: " << endl;
cout << "firstValue: " << firstValue << endl;
cout << "secondValue: " << secondValue << endl;
cout << endl;

firstValue=firstValue+secondValue;
secondValue = firstValue - secondValue;
firstValue = firstValue - secondValue;

cout << "Setelah ditukar:" << endl;
cout << "firstValue: " << firstValue << endl;
cout << "secondValue: " << secondValue << endl << endl;
    return 0;
}
