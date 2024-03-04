#include <iostream>
#include <cstdint>

using std::cout;

using points = uint32_t;
using rank = uint64_t;

struct score{
    points p{};
    rank r{};
};

int main()
{
    score s{5,1};
    cout << ("score s had {} points rank {}",s.p,s.r);
}