// This file is meant to contain common math functions
#include <string>
#include <iostream>
#include <vector>
#include <memory>

// Dot product two 1D vectors
namespace cmath
{
    // Dot product between two 1D vectors
    template <class T>
    T dot(std::vector<T> &vec1, std::vector<T> &vec2);
}

// Function definitions
template <class T>
T cmath::dot(const std::vector<T> &vec1, const std::vector<T> &vec2)
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
