#include <iostream>
using namespace std;

int main() {
    string line;
    cin >> line;
    
    if (line.find("ss") != string::npos) {
        cout << "hiss";
    }
    else cout << "no hiss";
}