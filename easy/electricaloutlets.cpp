#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t-- > 0) {
        int n;
        cin >> n;

        int sum = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            sum += x;
        }
        cout << sum - (n-1) << endl;
    }
}