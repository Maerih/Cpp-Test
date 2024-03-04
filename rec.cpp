#include <iostream>
#include <string>

using std::cout;
unsigned long factorial(unsigned long n);

int main()
{
    unsigned long n{5};
    cout << "factorial of: "<< n << "is"<< factorial(n);
}

unsigned long factorial(unsigned long n)
{
    if(n<2) return 1;
    return n* factorial(n-1);
}