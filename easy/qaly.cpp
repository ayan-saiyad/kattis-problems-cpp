#include <iostream>

int main() {
    
    int n;
    std::cin >> n;
    double sum = 0;

    for(int i = 0; i < n; i++) {
        double a, b;
        std::cin >> a >> b;
        sum += a * b;
    }

    std::cout << sum;
}