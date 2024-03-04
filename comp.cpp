#include <iostream>

using std::cout;

int main()
{
    auto x=5;
    auto y=47;

    cout << "y is "<< y;

    y+=x;

    cout << "y is now: " << y;
}