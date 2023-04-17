#include <iostream>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    if (line.size()%2 != 0 || line.find("(") != line.size()/2 -1) {
        cout << "fix";
    }
    else {
        cout << "correct";
    }
}