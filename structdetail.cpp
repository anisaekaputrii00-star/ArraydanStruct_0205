#include <iostream>
#include <string>
using namespace std;

struct alamatDetail
{
    string Desa;
    string Kota;
};

struct orang
{
    string nama;
    alamatDetail alamat;
    int umur;
};
int main() {
    Orang mhs;
    // mengisi data
    cout << "Mengisi Data" << endl;
    cout << "Nama : ";
    cin >> mhs.nama;
    cout << "Alamat : ";
    cin >> mhs.alamat.desa;
    cout << "Alamat : ";
    cin >> mhs.alamat.kota;
    cout << "Umur : ";
    cin >> mhs.umur;
    cout << endl;
    // tampilkan
    cout << "Menampilkan Data" << endl;
    cout << "Nama : " << mhs.nama << endl;
    cout << "Desa : " << mhs.alamat.desa << endl;
    cout << "Kota : " << mhs.alamat.kota << endl;
    cout << "Umur : " << mhs.umur << endl;
}