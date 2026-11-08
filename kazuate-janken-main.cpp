#include <iostream>
#include "janken.h"
#include "kazuate.h"

using namespace std;

int main() {
    // 文字列の配列を使用したメニュー項目
    const char* menuList[] = {
        "1: じゃんけんゲーム",
        "2: 数当てゲーム",
        "3: 終了"
    };
    const int menuCount = 3;

    int choice = 0;
    do {
        cout << "\n===== メニュー =====" << endl;
        for (int i = 0; i < menuCount; ++i) {
            cout << menuList[i] << endl;
        }
        cout << "選択してください (1-3): ";
        cin >> choice;

        switch (choice) {
        case 1:
            playJanken();
            break;
        case 2:
            playKazuate();
            break;
        case 3:
            cout << "ゲームを終了します。" << endl;
            break;
        default:
            cout << "無効な入力です。1〜3の間で選択してください。" << endl;
            break;
        }
    } while (choice != 3);

    return 0;
}