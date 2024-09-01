#include <iostream>
using namespace std;

int main() {
    const int FEE = 6;                     // 费用以角为单位
    int amount, money;
    cout << "请输入本月的用电量：";
    cin >> amount;

    money = amount * FEE;                  // 计算本月应付多少角

    cout << "你本月的电费是" << money / 10 << "元" << money % 10 << "角" << endl;
    cout << "共需支付" << money / 10 << "张1元、";
    cout << money % 10 / 5 << "张5角和";
    cout << money % 5 << "枚1角的硬币" << endl;

    return 0;
}