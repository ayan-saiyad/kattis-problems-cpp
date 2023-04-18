#include <iostream>
using namespace std;

int main() {
    int t;
    while(true) {
        cin >> t;
        if(t == -1) return 0;

        int prev = 0;
        int sum = 0;

        for(int i = 0; i < t; i++) {
            int m , h;
            cin >> m >> h;
            
            int elap = h - prev;
            
            sum += (m*elap);
            prev = h;
        }

        cout << sum << " miles" << endl;
    }
}