#include <iostream>

using std::cout;

int main()
{
    const char string[]{"string"};

    for (auto *p = string;*p;++p){
        cout << ("char is {}\n", *p);
    }
}