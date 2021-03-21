#include <iostream>
#include "vector2.h"

int main()
{
    vector2d<double> v1 = {1.0,2.0};
    std::cout << "v1 = " << "(" << v1.x << ", " << v1.y << ")" << std::endl;

    vector2d<double> v2 = {3.0,5.0};
    std::cout << "v2 =" << "(" << v2.x << ", " << v2.y << ")" << std::endl;
    vector2d<double> v3 = v2 - v1;
    std::cout << "v3 = v2-v1 =" << "(" << v3.x << ", " << v3.y << ")" << std::endl;

    vector2d<double> v4;
    std::cout << "v4 = " << "(" << v4.x << ", " << v4.y << ")" << std::endl;

    v3 += v2;
    std::cout << "v3 += v2 = " << "(" << v3.x << ", " << v3.y << ")" << std::endl;

    v3 -= v2;
    std::cout << "v3 -= v2 = " << "(" << v3.x << ", " << v3.y << ")" << std::endl;

    v3 /= 3;
    std::cout << "v3 /= 3 = " << "(" << v3.x << ", " << v3.y << ")" << std::endl;

    v3 *= 3;
    std::cout << "v3 *= 3 = " << "(" << v3.x << ", " << v3.y << ")" << std::endl;

    vector2d<double> v5 = 3*v3;
    std::cout << "v5 = 3*v3 = " << "(" << v5.x << ", " << v5.y << ")" << std::endl;

    v5 = v3*3;
    std::cout << "v5 = v3*3 = " << "(" << v5.x << ", " << v5.y << ")" << std::endl;

    double a = dot(v3,v2);
    std::cout << "dot(v3,v2) = " << a << std::endl;

    double l = lenght(v3);
    std::cout << "lenght(v3) = " << l << std::endl;

    double sql = sqlenght(v3);
    std::cout << "sqlenght(v3) = " << sql << std::endl;

    v4 = normalize(v3);
    std::cout << "v4 = normalize(v3) = " << "(" << v4.x << ", " << v4.y << ")" << std::endl;

    return 0;
}
