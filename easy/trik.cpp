#include <iostream>
using namespace std;

int main() {
    string line;
    cin >> line;

    bool cup[3];
    cup[0] = true;

    for(int i = 0; i < line.size(); i++) {
        char c = line[i];
        bool ph;

        switch(c) {
            case 'A':
                ph = cup[0];
                cup[0] = cup[1];
                cup[1] = ph;
                break;
            case 'B':
                ph = cup[1];
                cup[1] = cup[2];
                cup[2] = ph;
                break;
            case 'C':
                ph = cup[2];
                cup[2] = cup[0];
                cup[0] = ph;
                break;
        }
    }

    for(int i = 0; i < 3; i++) {
        if(cup[i]) cout << (i+1);
    }

    return 0;
}