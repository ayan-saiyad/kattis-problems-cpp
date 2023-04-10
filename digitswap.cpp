#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    cout << s.substr(s.size()-1, 1) << s.substr(0, 1);
}