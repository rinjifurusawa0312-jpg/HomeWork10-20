#include <iostream>
#include <cstdlib>
#include <ctime>
#include "kazuate.h"

using namespace std;

void playKazuate() {
    cout << "\n--- 数当てゲーム開始 ---" << endl;
    cout << "1 から 10 までの数字を当ててください！" << endl;

    srand(static_cast<unsigned int>(time(nullptr)));
    int targetNum = rand() % 10 + 1;
    int guess = 0;
    int attempts = 0;

    while (true) {
        cout << "予想する数値を入力してください: ";
        cin >> guess;
        attempts++;

        if (guess == targetNum) {
            cout << "正解です！ おめでとうございます！" << endl;
            cout << "試行回数: " << attempts << "回" << endl;
            break;
        }
        else if (guess < targetNum) {
            cout << "もっと大きいです。" << endl;
        }
        else {
            cout << "もっと小さいです。" << endl;
        }
    }
}