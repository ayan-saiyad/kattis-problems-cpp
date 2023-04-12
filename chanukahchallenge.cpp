#include <iostream>
using namespace std;

int count(int days) {
    int c = 0;
    for (int i = 1; i <= days; i++){
        c += i;
    }
    return c;
}

int main() {
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++) {
        int k, n;
        cin >> k >> n;
        cout << k << " " <<  count(n) + n << endl;
    }
}