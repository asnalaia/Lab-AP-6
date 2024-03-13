#include <iostream>
#include <string>

//ini untuk c++

using namespace std;

int main()
{
    string nama; // Mengubah tipe variabel menjadi string
    int nim;
    char kom;
    float ip;
    
    cout << "Hello world" << endl;
    
    cout << "Masukkan nama: ";
    getline(cin, nama); // Menggunakan getline() untuk memasukkan nama

    cout << "Masukkan nim: ";
    cin >> nim;
    
    cout << "Masukkan kom: ";
    cin >> kom;
    
    cout << "Masukkan IP: ";
    cin >> ip;
    
    cout << "Nama : " << nama << endl;
    cout << "NIM : " << nim << endl;
    cout << "KOM : " << kom << endl;
    cout << "IP : " << ip << endl;
    
    return 0; // Menambahkan return 0 untuk menandakan bahwa program berakhir dengan sukses
}
