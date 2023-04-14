#include <iostream>
using namespace std;

int main() {
    string line, code;
    getline(cin, line);
    getline(cin, code);

    for (int i = 0; i < code.size(); i+=3) {
        int x = stoi(code.substr(i, 3));
        cout << line[x-1];
    }
}