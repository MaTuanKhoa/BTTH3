#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong so nguyen: ";
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cout << "Nhap so nguyen thu " << i + 1 << ": ";
        cin >> a[i];
    }

    int max = a[0], min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }

    cout << "So lon nhat la: " << max << endl;
    cout << "So nho nhat la: " << min << endl;
}
