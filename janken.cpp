#include <iostream>
#include <cstdlib>
#include <ctime>
#include "janken.h"

using namespace std;

void playJanken() {
    cout << "\n--- じゃんけんゲーム開始 ---" << endl;

    // 文字列の配列を使って手を管理
    const char* hands[] = { "グー", "チョキ", "パー" };

    srand(static_cast<unsigned int>(time(nullptr)));
    int playerHand, cpuHand;

    cout << "出す手を選んでください (0: グー, 1: チョキ, 2: パー): ";
    cin >> playerHand;

    if (playerHand < 0 || playerHand > 2) {
        cout << "入力が不正です。0から2の間で入力してください。" << endl;
        return;
    }

    cpuHand = rand() % 3;

    cout << "あなた: " << hands[playerHand] << endl;
    cout << "CPU   : " << hands[cpuHand] << endl;

    if (playerHand == cpuHand) {
        cout << "あいこです！" << endl;
    }
    else if ((playerHand == 0 && cpuHand == 1) ||
        (playerHand == 1 && cpuHand == 2) ||
        (playerHand == 2 && cpuHand == 0)) {
        cout << "あなたの勝ちです！" << endl;
    }
    else {
        cout << "あなたの負けです..." << endl;
    }
}