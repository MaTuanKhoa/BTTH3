#include <iostream>
#include <cmath>
using namespace std;

bool isPrimeNumber(int n) {
    if (n < 2) {
        return false;
    }
    int squareRoot = (int)sqrt(n);
    for (int i = 2; i <= squareRoot; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    if (isPrimeNumber(n)) {
        cout << n << " la so nguyen to";
    } else {
        cout << n << " khong phai la so nguyen to";
    }
    return 0;
}

