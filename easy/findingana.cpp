#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int pos = s.find("a");

    cout << s.substr(pos);
}