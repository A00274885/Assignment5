//Write three separate C++ programs and submit a separate source code file for each of (a), (b) and (c) below.
//
//A completed Plagiarism Form is required.
//
//(a)   Write a recursive exponentiation function power(base, exponent) that, when invoked, returns
//
//base exponent
//
//For example, power(3, 4) = 3 * 3 * 3 * 3. Assume that exponent is an integer greater than or equal to 1. Hint: The recursion step would use the relationship
//
//        base exponent = base · base exponent - 1
//
//and the terminating condition occurs when exponent is equal to 1, because
//
//        base1 = base
#include <iostream>

int power(int base, int exponent)
{
    if(exponent != 0)
        return (base * power(base,exponent - 1));
    else
        return 1;
}

//int main()
//{
//    int base;
//    int exponent;
//
//    std::cout << "Input base number: ";
//    std::cin >> base;
//
//    std::cout << "Input exponent number: ";
//    std::cin >> exponent;
//
//    for(int i = base; i != 0; i--)
//        std::cout << base << " x ";
//    std::cout << base <<" = " << power(base,exponent);
//
//}