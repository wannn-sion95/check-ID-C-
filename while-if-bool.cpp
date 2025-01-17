#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name_lengkap;
    int umur;

    while (name_lengkap.empty())

    {
        cout << "Masukkan nama anda: ";
        getline(cin, name_lengkap);

        if (name_lengkap.empty())
        {
            cout << "Nama tidak boleh kosong" << endl;
        }
    }
    cout << name_lengkap << " Keren juga nama lu bang!" << endl;

    bool valid_input = false;
    while (!valid_input)
    {
        cout << "Berapa umur lu bro: ";
        cin >> umur;

        if (cin.fail() || umur <= 0)
        {
            cout << "Input umur harus berupa angka positif!" << endl;
            cin.clear();
            cin.ignore(100, '\n');
        }
        else
        {
            valid_input = true;
        }
    }

    if (umur > 18)
    {
        cout << "Kalau umur lo udah " << umur << " tahun. Lo udah bisa ikut PEMILU bro";
    }
    else
    {
        cout << "Lu nonton boboiboy aja dek";
    }

    return 0;
}
