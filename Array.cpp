#include <iostream>
using namespace std;

int main() {
    
    // deklarasi array disertai inisialisasi
    int dataku[5] = {10, 20, 30, 40, 50};
    
    // deklarasi tanpa inisialisasi
    int datamu[5];

    // tampilkan data  (membaca data array)
    cout << " data pada index 1 = : " << aku[1] << endl;

    // ganti index ke 1 (menulis data array)
    aku[1] = 200;
    count << endl;
    cout << " data pada index 1 = : " << aku[1] << endl;

// mengisi data dengan perintah satu persatu
    cout << "data index 0 = ";
    cin >> datamu[0];
    cout << "data index 1 = ";
    cin >> datamu[1];
    count <<"data index 2 = ";
    cin >> datamu[2];
    count <<"data index 3 = ";
    cin >> datamu[3];
    count << "data index 4 = ";
    cin  >> datamu[4];
    count << endl;
   
    //menampilkan data satu per satu
    
    cout << "data pertama = " << datamu[0] << endl;
    cout << "data kedua = " << datamu[1] << endl;
    cout << "data ketiga = " << datamu[2] << endl;
    cout << "data keempat = " << datamu[3] << endl;
    cout << "data kelima = " << datamu[4] << endl;

    // mengisi data melalui perulangan
    for (int i = 0; i <= 4; i++)
    {
        cout << "Isikan data ke-" << (i + 1) << " : ";
        cin >> datamu[i];
    }
    // menampilkan data dengan perulangan
    for (int i = 0; i <= 4; i++)
    {
        cout << "Data ke-" << (i + 1) << " : " << datamu[i] << endl;
    }
