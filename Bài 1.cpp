#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Nhap so nguy�n n: ";
    cin >> n;
    cout << "C�c so le nho hon hoac bang " << n << " l�: ";
    for (int i = 1; i <= n; i += 2) {
        cout << i << " ";
        count++;
        if (count == 15) {
            cout << endl;
            count = 0;
        }
    }
    return 0;
}

