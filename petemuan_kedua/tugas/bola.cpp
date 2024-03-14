#include <iostream>
using namespace std;

int main() {
    const float phi = 3.14;
    float r, volume, luas_permukaan;

    cout << "Masukkan jari-jari bola: ";
    cin >> r;

    volume = (4 / 3) * phi * r * r * r; 
    luas_permukaan = 4 * phi * r * r;  

    cout << "Volume bola adalah " << volume << endl;
    cout << "Luas permukaan bola adalah " << luas_permukaan << endl;
}
