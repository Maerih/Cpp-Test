#include <iostream>
#include <cstdint>

using std::cout;
void printp(const int_type *p);

using int_type = uint32_t;

int main()
{
    int_type arr[]{1,2,3,4,5};
    int_type *p =arr;
    printp(++p);
    printp(++p);
}

void printp(const int_type *p)
{
    cout << "pointer is: "<< static_cast < const void* >(p) << "value is: "<<*p;
}