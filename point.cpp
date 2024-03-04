#include <iostream>

using std::cout;
using std::to_string;

int main()
{
    int x{7};
    int y{42};
    int *ip = &x;

    cout << ("The value of x {}\n",to_string(x));
    cout << ("Value of y {}\n",y);
    cout << ("value of *ip {}",*ip);
}