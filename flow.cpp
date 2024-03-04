#include <iostream>


using std::cout;

int main()
{
    auto x=42;
    auto y=7;
    auto s = x < y ? "yes":"no";
    cout << ("answer is {}",s);
}