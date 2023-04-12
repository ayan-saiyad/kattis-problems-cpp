#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int walk = 0;
    double avg = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x == -1) walk++;
        else avg += x;
    }

    double calc = (avg)/(n-walk);
    cout << calc;
}