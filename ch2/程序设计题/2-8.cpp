#include <iostream>
using namespace std;

int main() {
    double avg;
    int num1, num2, num3, num4;

    cout << "请输入4个整型数：";
    cin >> num1 >> num2 >> num3 >> num4;

    avg = (num1 + num2 + num3 + num4) / 4.0;

    cout << num1 << " " << num2 << " " << num3 << " " << num4 << "的平均值："
    << avg << endl;

    return 0;
}