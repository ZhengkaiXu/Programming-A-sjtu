#include <iostream>
using namespace std;

int main() {
    const double priceOfApple = 2.50;
    const double priceOfPear = 1.80;
    const double priceOfBanana = 2.00;
    const double priceOfOrange = 1.60;

    double apple, pear, banana, orange;
    double money, income, change;

    cout << "请输入苹果、梨、香蕉、橘子的重量：";
    cin >> apple >> pear >> banana >> orange;

    money = apple * priceOfApple + pear * priceOfPear +
            banana + priceOfBanana + orange + priceOfOrange;

    cout << "你应该付" << money << "元" << endl;

    cin >> income;
    change = income - money;
    cout << "\n找零" << change << "元";

    return 0;
}