#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double c; 
    int n;
    cin >> c >> n;
    
    double sum = 0;
    for(int i = 0 ; i < n; i++) {
        double w, l;
        cin >> w >> l;
        
        sum += (w*l*c);
    }
    cout << fixed << std::setprecision(6) << sum;
}