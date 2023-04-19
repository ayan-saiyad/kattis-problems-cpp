#include <iostream>
using namespace std;

int factorial(int x) {
    int prod = 1;
    while(x > 0) {
        prod *= x;
        x--;
    }
    return prod;
}

int main() {
    int t;
    cin >> t;

    while (t-- > 0) {
        int x;
        cin >> x;

        string digits = to_string(factorial(x));

        cout << digits[digits.size()-1] << endl;

    }
}