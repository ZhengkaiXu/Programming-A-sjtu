#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2, distance;

    cout << "请输入点1的坐标：";
    cin >> x1 >> y1;
    cout << "请输入点2的坐标：";
    cin >> x2 >> y2;

    distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

    cout << "(" << x1 << ", " << y1 << ") ->(" << x2 << ", " << y2 << ")的距离："
    << distance << endl;

    return 0;
}