#include <iostream>

using std::cout;

int main()
{
    int x = 43;
    int &rx = x;
    cout << ("x is {}",rx);
}