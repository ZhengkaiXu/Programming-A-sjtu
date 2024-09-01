#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "请输入一个字符：";
    cin >> ch;

    cout << static_cast<int>(ch) << endl;

    return 0;
}