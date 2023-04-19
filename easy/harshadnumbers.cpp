#include <iostream>
using namespace std;

int sum(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x%10;
        x/=10;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    while(true) {
        if(n%sum(n) == 0) break;
        n++;
    }
    cout << n;
}