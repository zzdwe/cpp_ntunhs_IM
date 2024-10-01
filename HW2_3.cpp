#include <iostream>
#include <cstdlib>  // 包含 rand() 和 srand()
#include <ctime>    // 包含 time() 來初始化隨機數
using namespace std;

int main() {
    // 初始化隨機數生成器
    srand(time(0));
    int ans = rand() % 10;  // 生成 0 到 9 之間的隨機數
    int guess = 0;
    int s1 = 0;
    int s2 = 9;

    while (true) {
        cout << "請從 " << s1 << " 到 " << s2 << " 之間輸入一個數字: ";
        cin >> guess;

        if (guess == ans) {
            cout << "你猜對答案了!" << endl;
            break; 
        } else if (guess > s2 || guess < s1) {
            cout << "猜測數字不在範圍內" << endl;
            continue;
        } else if (guess > ans) {
            cout << "你猜的答案太大了" << endl;
            s2 = guess - 1;  //-1更新上限
        } else {
            cout << "你猜的答案太小了" << endl;
            s1 = guess + 1;  //+1更新下限
        }
    }

    return 0;
}
