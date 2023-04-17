#include <iostream>
#include <cmath>
using namespace std;

int reverse(int x) {
    string r = "";
    while (x > 0) {
        r += to_string(x%10);
        x/=10;
    }
    return stoi(r);
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << max(reverse(a), reverse(b));
}