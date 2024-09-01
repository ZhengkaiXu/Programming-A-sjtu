#include <iostream>
using namespace std;

int main() {
    const double RATE = 1.2;
    double principal;
    int years;

    cout << "请输入本金（元）和存期（年）：";
    cin >> principal >> years;

    principal = principal + principal * RATE * years / 100;

    cout << "你的本利和是" << principal << endl;

    return 0;
}