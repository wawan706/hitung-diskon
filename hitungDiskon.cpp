#include <iostream>
using namespace std;

int diskon(int a){
    int diskon = 0;
    if (a < 100000 && a > 0){
        diskon = 5;
    } else if (a >= 100000 && a < 500000){
        diskon = 10;
    } else if (a >= 500000){
        diskon = 15;
    } else if (a <= 0){
        diskon = 0;
    }
    return diskon;
};

int harga_diskon(int a){
    float harga_akhir = 0;
    harga_akhir = a - (a * (diskon(a) / 100));
    return harga_akhir;
};

int main() {
    int a;
    cout << "Ini adalah program yang menghitung" <<
    " harga akhir belanjaan anda setelah diskon\n" << 
    "- dibawah 100k diskon 5%\n" << "- antara 100-499k diskon 10%\n" <<
    "- 500k keatas diskon 15%\n" << 
    "masukkan 3 digit ribuan, jangan pakai 'k' \n";
    cout << "Masukkan total belanjaan anda: ";
    cin >> a;
    cout << "------------------------------\n";

    cout << "total belanjaan: Rp." << a << "\ndiskon: " << diskon(a) << "%" <<
    "\nharga belanjaan: Rp." << harga_diskon(a) << endl;
}
