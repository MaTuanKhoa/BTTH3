#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    cout << "Tat ca cac uoc cua so " << n << " la ";
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            cout << i << " ";
        }
    }
    return 0;
}
