#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        string s;
        cin >> s;

        if(i%2 != 0) {
            cout << s << endl;
        }
    }
}