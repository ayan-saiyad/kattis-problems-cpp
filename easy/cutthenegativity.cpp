#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int flight[n][n];
    int count = 0;
    for(int x = 0; x < n; x++) {
        for (int y = 0; y < n; y++) {
            cin >> flight[x][y];

            if (flight[x][y] != -1) {
                count++;
            }
        }
    }

    cout << count << endl;
    for (int x = 0; x < n; x++) {
        for (int y = 0; y < n; y++) {
            
            if (flight[x][y] != -1)  {
                cout << x+1 << " " << y+1 << " " << flight[x][y] << endl;
            }
        }
    } 
} 