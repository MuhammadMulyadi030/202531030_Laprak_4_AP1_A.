#include <iostream>
using namespace std;

int main() {
    int pilihan;

    while (true) {
        cout << "\n=== FIBONACCI GENERATOR ===" << endl;
        cout << "1) n suku" << endl;
        cout << "2) sampai <= m" << endl;
        cout << "3) exit" << endl;
        cout << "Pilih: ";
        cin >> pilihan;

        if (pilihan == 1) {
            int n;
            cout << "Masukkan n: ";
            cin >> n;

            if (n <= 0) {
                cout << "Input tidak valid!" << endl;
            } else {
                int a = 0, b = 1, hasil;

                cout << "\nHasil (" << n << " suku):" << endl;

                for (int i = 0; i < n; i++) {
                    cout << a << " ";
                    hasil = a + b;
                    a = b;
                    b = hasil;
                }
                cout << endl;
            }
        }

    
        else if (pilihan == 2) {
            int m;
            cout << "Masukkan m: ";
            cin >> m;

            if (m < 0) {
                cout << "Input tidak valid!" << endl;
            } else {
                int a = 0, b = 1, hasil;

                cout << "\nHasil (<= " << m << "):" << endl;

                while (a <= m) {
                    cout << a << " ";
                    hasil = a + b;
                    a = b;
                    b = hasil;
                }
                cout << endl;
            }
        }

      
        else if (pilihan == 3) {
            cout << "Program selesai. Terima kasih!" << endl;
            break;
        }

    
        else {
            cout << "Pilihan tidak tersedia!" << endl;
        }
    }

    return 0;
}


