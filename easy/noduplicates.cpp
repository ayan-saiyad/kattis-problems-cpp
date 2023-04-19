#include <iostream>
#include <sstream>
#include <string>
#include <set>
using namespace std;

int main() {
    set<string> check;
    string line;
    getline(cin, line);

    stringstream ss(line);
    string token;

    int count = 0;
    while(getline(ss, token, ' ')) {
        check.insert(token);
        count++;
    }

    if(check.size() == count) {
        cout << "yes";
    }
    else {
        cout << "no";
    }
}