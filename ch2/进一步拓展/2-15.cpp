#include <iostream>
using namespace std;

int main() {
    unsigned char x = 'a', y = 0x0f;
    unsigned char z = x | y;

    cout << z << endl;

    return 0;
}