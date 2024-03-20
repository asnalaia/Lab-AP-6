#include <iostream>
using namespace std;

int main() 
{
    const float phi = 3.14;
    float r, t, s, volume, luas_permukaan;

    cout << "Masukkan jari-jari kerucut: ";
    cin >> r;
    cout << "Masukkan tinggi kerucut: ";
    cin >> t;
    cout << "Masukkan garis pelukis kerucut: ";
    cin >> s; 

    volume = (1.0 / 3) * phi * r * r * t; 
    luas_permukaan = phi * r * (s + r);  

    cout << "Volume kerucut adalah " << volume << endl;
    cout << "Luas permukaan kerucut adalah " << luas_permukaan << endl;
}
