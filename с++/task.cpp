#include <iostream>
#include <cmath>

int main() {
    double a, b, l, r;
    a = 1;
    b = 0;
    l = 0;
    r = 1;
    int s = 0;
    while (r - l > 0.0001)
    {
        s++;
        b = (l + r) / 2;
        if (sqrt(1 - b) - tan(b))
        {
            r = b;
        }
        else 
        {
            l = b;
        }
        std::cout << s;
        std::cout << " ";
        std::cout << b << std::endl;
    }
    std::cout << b << std::endl;
}
