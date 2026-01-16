#include <iostream>
using namespace std;

int main() {
    int kodeRahasia = 7;  
    int tebakan;
    bool benar = false;   

    for (int i = 1; i <= 3; i++) {
        cout << "Percobaan " << i << "/3 - Tebak: ";
        cin >> tebakan;

        if (tebakan == kodeRahasia) {
            cout << "Benar!" << endl;
            benar = true;
            break;  
        } else {
            cout << "Salah!" << endl;
        }
    }

    if (!benar) {
        cout << "Kalah! Angka = " << kodeRahasia << endl;
    }

    return 0;
}

