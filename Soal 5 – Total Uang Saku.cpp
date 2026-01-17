#include <iostream>
using namespace std;

int main() {
    int n;              
    int uang;         
    int total = 0;     

    cout << "Uang Saku" << endl;
    cout << "Masukkan jumlah hari: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Uang saku hari ke-" << i << ": ";
        cin >> uang;
        total += uang;  
    }
    cout << endl;
    cout << "Total: " << total << endl;

    return 0;
}

