/**
 * !Same solution as Apaxians
 */

#include <iostream>
using namespace std;

int main() {
    string line;
    getline(cin, line);
    
    string ans = "";
    ans += line[0];
    for(int i = 1; i < line.size(); i++) {
        if(line[i] != line[i-1]) {
            ans += line[i];
        }
    }
    cout << ans;
}