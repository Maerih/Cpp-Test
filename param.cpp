#include <iostream>
#include <string>

using std::cout;
void func(const std::string &s);

int main()
{
    std::string s{"this is a string"};
    func(s);
}

void func(const std::string &s){
    cout << "value is: " << s;
}