#include <iostream>
using namespace std;

int main() {
    double a, b, c, d;

    cout << "请输入第一个复数的实部和虚部：";
    cin >> a >> b;
    cout << "请输入第二个复数的实部和虚部：";
    cin >> c >> d;

    cout << "（" << a << '+' << b << "i）+（" << c << '+' << d << "i）=（"
    << a + c << '+' << b+d << "i）\n";

    return 0;
}