#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double nomor_id;  // Menggunakan long long / double untuk mendukung angka besar
    cout << "----------------" << endl;
    cout << "Nama Pemilik Nomor ID" << endl;
    cout << "----------------" << endl;

    cout << "Masukkan NRP Anda: ";
    cin >> nomor_id;

    if (nomor_id == 4395001) {
        cout << "Nama: Fauzan Wahyu" << endl;
    } else if (nomor_id == 43950002) {
        cout << "Nama: Safran Matondang" << endl;
    } else if (nomor_id == 43950003) {
        cout << "Nama: Abd Jabbar" << endl;
    } else if (nomor_id == 43950004) {
        cout << "Nama: Sakinah Salsabila" << endl;
    } else if (nomor_id == 43950005) {
        cout << "Nama: Nabilah Rahmadani" << endl;
    } else if (nomor_id == 43950006) {
        cout << "Nama: Muhammad Fadlan" << endl;
    } else if (nomor_id == 43950007) {
        cout << "Nama: Muhammad Zulhamdi" << endl;
    } else if (nomor_id == 43950008) {
        cout << "Nama: Muhammad Ikhsan" << endl;
    } else if (nomor_id == 43950009) {
        cout << "Nama: Rayna Kayla" << endl;
    } else if (nomor_id == 43950010) {
        cout << "Nama: Anita Khairani" << endl;
    } else if (nomor_id == 43950011) {
        cout << "Nama: Mhd. Ridwan" << endl;
    } else {
        cout << "Invalid, harap masukkan nomor ID yang sesuai" << endl;
    }

    return 0;
}
