#include <iostream>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    if ((line.find(":)") != string::npos) && (line.find(":(") != string::npos) ) {
        cout << "double agent";
    }
    else if (line.find(":)") != string::npos) {
        cout << "alive";
    }
    else if (line.find(":(") != string::npos) {
        cout << "undead";
    }
    else {
        cout << "machine";
    }
}