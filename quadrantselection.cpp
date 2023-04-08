#include <iostream>

int main() {
    bool neg1 = false, neg2 = false;

    int x, y;
    std::cin >> x >> y;

    if(x < 0) neg1 = true;
    if(y < 0) neg2 = true;

    if(neg1 && neg2) std::cout << 3;
    else if (!neg1 && neg2) std::cout << 4;
    else if (neg1 && !neg2) std::cout << 2;
    else std::cout << 1;

}