#include <iostream>

using std::cout;

int main()
{
    bool a{true};
    auto b = false;
    int c;

    cout << "a is "<< a;
    cout << "b is "<<b;
    cout << "size in  bytes "<< sizeof(c);
}