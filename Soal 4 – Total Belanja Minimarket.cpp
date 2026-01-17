#include <iostream>
using namespace std;

int main() {
    int harga;                
    int jumlahBarang = 0;       
    int totalHarga = 0;         
    double diskon = 0;          
    double totalBayar;         

    cout << "Belanja Minimarket" << endl;
    cout << "Masukkan harga barang (0 untuk selesai):" << endl;

    while (true) {
        cout << "Harga: ";
        cin >> harga;

        if (harga == 0) {
            break;  
        }

        jumlahBarang++;         
        totalHarga += harga;    
    }

    if (totalHarga >= 100000) {
        diskon = totalHarga * 0.10;  
    }

    totalBayar = totalHarga - diskon;

    cout << endl;
    cout << "Jumlah barang: " << jumlahBarang << endl;
    cout << "Total sebelum diskon: " << totalHarga << endl;
    cout << "Diskon: " << diskon << endl;
    cout << "Total bayar: " << totalBayar << endl;

    return 0;
}

