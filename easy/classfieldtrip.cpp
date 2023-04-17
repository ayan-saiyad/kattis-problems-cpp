#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string a, b;
    getline(cin, a);
    getline(cin, b);

    string ab =  a + b;
    sort(ab.begin(), ab.end());

    cout << ab;

}