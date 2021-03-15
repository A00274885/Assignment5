
#include <iostream>

int commonDivisor(int num1, int num2);

//int main()
//{
//    int num1;
//    int num2;
//
//    std::cout << "Enter first number: ";
//    std::cin >> num1;
//
//    std::cout << "Enter second number: ";
//    std::cin >> num2;
//
//    std:: cout << commonDivisor(num1,num2);
//
//}

int commonDivisor(int num1, int num2)
{
    if(num2 == 0)
        return num1;
    return commonDivisor(num2,num1 % num2);
}