#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n%2 != 0) cout << "still running";
    else {
        int sum = 0;
        for(int i = 0; i < n/2; i++) {
            int a, b;
            cin >> a >> b;

            sum += (b-a);
        }
        cout << sum;
    }
}