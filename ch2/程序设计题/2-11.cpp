#include <iostream>
using namespace std;

int main() {
    double r, s;

    cout << "请输入圆的半径：";
    cin >> r;

    s = 3.14 * r * r;

    cout << "半径为" << r << "的圆的面积是" << s << endl;

    return 0;
}