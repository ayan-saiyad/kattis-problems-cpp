#include <iostream>
using namespace std;

int main() {
    string date;
    getline(cin, date);
    
    if(date.find("OCT 31") != string::npos || date.find("DEC 25") != string::npos) {
        cout << "yup";
    }
    else cout << "nope";
}