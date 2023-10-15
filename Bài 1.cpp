#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Nhap so nguyên n: ";
    cin >> n;
    cout << "Các so le nho hon hoac bang " << n << " là: ";
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

