#include <iostream>

using std::cout;

int func(int i, const char *s)
{
    cout << ("i is {} {}\n",i,s);
    return i*2;
}

int main()
{
    cout << "This its the main()\n";
    auto x = func(42,"fouty-two");
    cout << ("x is {}\n",x);
}