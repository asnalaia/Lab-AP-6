#include <iostream>
using namespace std;

int main() // Removed semicolon here
{
    float panjang, lebar, luas;

    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;

    luas = panjang * lebar;

    cout << "Luas= " << luas << endl;

    return 0; // Added return statement
}
