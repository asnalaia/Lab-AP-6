#include <iostream>
using namespace std;

int main() 
{
    const float phi = 3.14; 
    float r, t, volume;
    
    cout << "Masukkan jari-jari tabung: ";
    cin >> r;
    cout << "Masukkan tinggi tabung: ";
    cin >> t;

    volume = phi * r * r * t; 

    cout << "Volume tabung: " << volume << endl;
}
