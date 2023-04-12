#include <iostream>
using namespace std;

bool find(string s, string c) {
    int i = s.find(c);
    return i != string::npos;
}

int main() {
    string line;
    cin >> line;

    for(int i = 0; i < line.length(); i++) {
        string ch = line.substr(i, 1);
        if (find(line.substr(i+1), ch)) {
            cout << 0;
            return 0;
        }
    }
    cout << 1;
}