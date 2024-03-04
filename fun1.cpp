#include <iostream>

using std::cout;

void func(int *p)
{
    ++*p;
}

int main()
{
    int a = 7;
    func(&a);
    cout << "value is: " << a << " address is: " << &a << '\n';

    return 0;
}


