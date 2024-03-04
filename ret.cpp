#include <iostream>
#include <string>

using std::cout;
using std::string;
const string &func(int a);
int main()
{
    const auto &x = func(42);
    cout << "s is: "<< x;
}

const string &func(int a){
    static string s = "value is: " << std::to_string(a*2);
    return s;
}