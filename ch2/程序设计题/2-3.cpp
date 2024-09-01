#include <iostream>
using namespace std;

int main() {
    int time, yuanPerHour, totalSalary, salary;

    cout << "请输入每小时工资：";
    cin >> yuanPerHour;
    cout << "请输入本月劳动时间：";
    cin >> time;

    totalSalary = time * yuanPerHour;             // 计算总工资
    salary = totalSalary - 0.1 * totalSalary;     // 计算应发工资

    cout << "本月应得工资：" << salary << endl;
}