#include <iostream>

using std::cout;

void func();
 
int main()
{
    cout << "this is the main()\n";
    func();
    func();
}

void func()
{
    static auto i=5;
    cout << "i is: " << ++i;
}