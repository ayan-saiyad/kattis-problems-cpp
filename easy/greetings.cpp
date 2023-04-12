#include <iostream>
#include <string>

using namespace std;

// * SOLUTION 1
// int main() {
//     string s;
//     getline(cin, s);

//     int n = s.size() - 2;

//     cout << "h";
//     for (int i = 0; i < n*2; i++) {
//         cout << "e";
//     }
//     cout << "y";
// }

// * SOLUTION 2
int main() {
    string s;
    getline(cin, s);

    string e = s.substr(1, s.size()-2);

    cout << "h" << e + e << "y";
}

