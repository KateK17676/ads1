#include <iostream>
#include <cmath>

int main() {
    double l, r, b, s;
    l = 0; // промежуток
    r = 1;
    s = 0;
    double fl, fb;

    while (r - l > 0.0001)
    {
        s++;
        b = (l + r) / 2; // середина
        fl = sqrt(1 - l) - tan(l);
        fb = sqrt(1 - b) - tan(b);
        if (fl * fb < 0) // значения имеют разные знаки
        {
            r = b; // корень между l и b
        }
        else
        {
            l = b; // между b и r
        }
        std::cout << s << " " << b << std::endl;
    }
    b = (l + r) / 2;
    std::cout << "Корень: " << b << std::endl;

    return 0;
}
