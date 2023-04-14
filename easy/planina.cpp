#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    cout << static_cast<int>(pow((sqrt(pow(4, n)) +1), 2));
}