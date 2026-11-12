// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
#include <string>
using namespace std;

long long a, b, c;

int main() {
    cout << "Masukkan massa beras gudang a: ";
    cin >> a;

    cout << "Masukkan massa beras gudang b: ";
    cin >> b;

    cout << "Masukkan kapasitas gerobak c: ";
    cin >> c;

    if ((a + b) % 2 != 0) {
        cout << -1;
    }
    else if (a == b) {
        cout << 0;
    }

    else {
        long long target = (a + b) / 2;
        
        long long selisih = 0;
        if (a > target) {
            selisih = a - target;
        }
        else {
            selisih = target - a;
        }

        long long banyakperjalanan = (selisih + c - 1) / c;
        cout << banyakperjalanan;
    }
}
