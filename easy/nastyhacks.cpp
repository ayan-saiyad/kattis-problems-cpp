#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        int r, e, c;
        cin >> r >> e >> c;
        
        if (r > (e-c)) {
            cout << "do not advertise" << endl;
        }
        else if (r < (e-c)) {
            cout << "advertise" << endl;
        }
        else cout << "does not matter" << endl;
    }
}