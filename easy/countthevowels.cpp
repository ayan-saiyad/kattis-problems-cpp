#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string line;
    getline(cin, line);
    
    int count = 0;
    for (int i = 0; i < line.size(); i ++) {
        char c = tolower(line[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    
    }
    cout << count;
} 