#include <iostream>

using std::cout;
void func();

int main()
{
    cout << "Main function()";
    func();
}

void func()
{
    cout << "this is the func()";
}