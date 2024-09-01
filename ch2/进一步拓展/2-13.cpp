#include <iostream>
using namespace std;

int main() {
    unsigned short x = 32767, y = 0xff;
    unsigned short z = x & y;

    cout << z << endl;

    return 0;
}