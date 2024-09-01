#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, n4, n5, n6, n7, n8, num, newStatus;
    char flag = 0;

    cout << "请输入8盏灯的初始状态（0表示关灯，1表示关灯）：";
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8;

    // 设置初始状态
    flag = n1;
    flag |= (n2 << 1);
    flag |= (n3 << 2);
    flag |= (n4 << 3);
    flag |= (n5 << 4);
    flag |= (n6 << 5);
    flag |= (n7 << 6);
    flag |= (n8 << 7);

    cout << "请输入改变状态的灯的编号：";
    cin >> num;
    --num;
    flag ^= (1 << num);
    newStatus = flag & (1 << num);
    newStatus = newStatus >> num;
    cout << "新的状态是" << newStatus << endl;

    return 0;
}