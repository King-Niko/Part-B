// Nicholas Walling
// CIS 1202 101
// December 8, 2024
// Exceptions, Templates & STL
// A program that has custom templated functions that perform math on varying numeric data types.

#include <iostream>
#include <cmath>
using namespace std;

// Template function for floating-point types (float, double)
template <typename T>
T half(T value)
{
    return (value / 2);
}

// Specialized template function for integers
template <>
int half<int>(int value)
{
    return static_cast<int>(round(value / 2.0));
}

int main()
{
    // Test cases for the function
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    // Display the output for each case

}