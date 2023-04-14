#include <iostream>
using namespace std;

int main() {

    int high = 0;
    int index;

    for (int i = 1; i <= 5; i++) {
        int sum = 0;
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        sum = a + b + c + d;
        if (sum > high) {
            index = i;
            high = sum;
        }
    }
    cout << index << " " << high;
}