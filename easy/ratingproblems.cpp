#include <iostream>
using namespace std;

int main() {
    int judge, n;
    cin >> judge >> n;

    double avg = 0;
    for(int i = 0; i < n; i++) {
        int r;
        cin >> r;

        avg += r;
    }

    cout << ((avg + (judge-n) * -3)/judge) << " " << ((avg + (judge-n) * 3)/judge);
}