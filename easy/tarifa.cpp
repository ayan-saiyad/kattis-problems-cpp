#include <iostream>
using namespace std;

int main() {
    int x, n;
    cin >> x >> n;

    int bal = 0;
    for(int i = 0; i < n; i++) {
        bal += x;

        int z;
        cin >> z;

        bal -= z;
    }

    cout << (bal + x);
}