#include <iostream>

using namespace std;

int main() {
    int bilangan;
    int pangkat;
    int hasil = 1;

    cout << "Silahkan Masukkan Bilangan: ";
    cin >> bilangan;

    cout << "Silahkan Masukkan Pangkat: ";
    cin >> pangkat;

    for (int i = 1; i <= pangkat; i++) {
        hasil = hasil * bilangan;
    }

    cout << "Hasil dari " << bilangan << " pangkat " << pangkat << " adalah " << hasil << endl;

    return 0;
}
