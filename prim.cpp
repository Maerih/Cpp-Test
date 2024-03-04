#include <iostream>

using std::cout;

int main() {
    int array[]{1, 2, 3, 4, 5};

    for (const int &i : array) {
        cout << i << " "; 
    }
    cout << '\n'; 

    array[2] = 42;
    auto x = array[2];
    cout << "x is " << x << '\n'; 

    return 0;
}
