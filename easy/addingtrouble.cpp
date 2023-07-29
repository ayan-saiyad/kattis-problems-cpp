#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    string ans;
    ans = (a + b == c) ? "correct!" : "wrong!";

    cout << ans;
}
