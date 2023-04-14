#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int h, m;
    cin >> h >> m;

    m-=45;
    if (m < 0) {
        h--;
        if (h < 0) {
            h = 24 - abs(h);
        }
        m = 60 - abs(m);
    }
    cout << h << " " << m;
}