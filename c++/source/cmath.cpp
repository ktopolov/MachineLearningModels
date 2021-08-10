// Definintions of common math functions
#include <stdexcept>

#include "cmath.h"

namespace cmath
{
    template <class T>
    T dot(std::vector<T> &vec1, std::vector<T> &vec2)
    {
        if (!(vec1.size() == vec2.size()))
        {
            throw std::length_error("cmath.dot() vectors must be same size");
        }

        T result = 0;
        for (size_t ii = 0; ii < vec1.size(); ii++)
        {
            result += vec1[ii] * vec2[ii];
        }
        return result;
    }
}
