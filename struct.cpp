#include <iostream>

using std::cout;

struct S
{
    int i{};
    double d{};
    const char *s{};
};

int main()
{
    S s1{3,47.9,"Kenya Kwanza"};
    s1.d =73.0;
    cout << "s1:  "<<s1.i <<","<<s1.d<<","<<s1.s;
}