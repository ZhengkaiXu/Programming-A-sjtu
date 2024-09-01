#include <iostream>
using namespace std;

int main() {
    unsigned short x = 32767, y = 0x8000;

    if (x & y) {
        cout << "最高位是1\n";
    } else {
        cout << "最高位是0\n";
    }

    return 0;
}