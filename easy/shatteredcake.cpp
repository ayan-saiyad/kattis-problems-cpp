#include <iostream>
using namespace std;

int main() {
    int W, n;
    cin >> W >> n;

    int area = 0;
    for (int i = 0; i < n; i++) {
        int w, l;
        cin >> w >> l;

        area += (w*l);
    }
    cout << (area/W);

    return 0;
}