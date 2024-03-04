#include <iostream>

using std::cout;

int main() {
    int array[]{1, 2, 3, 4, 5};
    int i = 0;

    while (i < 5) {
        if (i == 3) break;
        cout << "element " << i << " is " << array[i] << "\n";
        ++i;
    }

    return 0;
}
