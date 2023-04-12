#include <iostream>
using namespace std;

int main() {
    int g, t, n;
    cin >> g >> t >> n;
    
    int cap = (g - t) * 0.9;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cap -= x;
    }

    cout << cap;


}
