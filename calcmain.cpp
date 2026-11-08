#include <iostream>
#include "calc.h"
using namespace std;

int main() {

	// 変数の宣言

	float value1 = 3.14;
	float value2 = 1.93;

	// 答えを入れておくための変数

	float answer = 0;

	// 表示

	answer = sum(value1, value2);
	cout << "足し算の結果 : " << answer << "です。" << endl;
}