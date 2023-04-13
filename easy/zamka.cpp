#include <iostream>
using namespace std;

int sum(int n) {
    int sum = 0;
    while(n != 0) {
        sum += n%10;
        n/=10;
    }
    return sum;
}

int main() {
    int l, d, x;
    cin >> l >> d >> x;

    for(int i = l; i <= d; i++) {
        if(sum(i) == x) {
            cout << i << endl;
            break;
        }
    }

    for(int i = d; i >= l; i--) {
        if(sum(i) == x) {
            cout << i;
            break;
        }
    }

}

