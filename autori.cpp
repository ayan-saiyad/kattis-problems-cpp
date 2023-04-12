#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

int main() {

    string line;
    cin >> line;
    line = line + "-";

    stringstream ss(line);
    string token;
    while(getline(ss, token, '-')) {
        cout << token[0];
    }
}