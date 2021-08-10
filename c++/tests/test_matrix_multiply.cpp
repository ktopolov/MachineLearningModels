// STL modules
#include <string>
#include <iostream>
#include <vector>

// Internal modules
#include "cmath.h"

int main()
{
    const std::string printout = "Hello";
    const std::vector<double> v1 = {1, 4, 3};
    const std::vector<double> v2 = {1, 2, 3};
    double result = cmath::dot(v1, v2);
    std::cout << "Result is " << result << std::endl;
    std::cout << printout << std::endl;
    return 0;
}
