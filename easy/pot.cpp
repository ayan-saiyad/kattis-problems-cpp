#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        string num;
        cin >> num;

        int base = stoi(num.substr(0, num.size() - 1));
        int exp = num[num.size()-1] - '0';

        sum += pow(base, exp);
    }

    cout << sum;
}