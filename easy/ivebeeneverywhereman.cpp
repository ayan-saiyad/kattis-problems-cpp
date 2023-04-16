#include <iostream>
#include <set>
using namespace std;

int main() {

    set<string> place;
    int t;
    cin >> t;
    
    while(t-- > 0) {
        place.clear();

        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;

            place.insert(s);
        }
        cout << place.size() << endl;
    }
}
