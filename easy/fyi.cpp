#include <iostream>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    if (line.substr(0, 3) == "555") {
        cout << 1;
    }
    else cout << 0;
}