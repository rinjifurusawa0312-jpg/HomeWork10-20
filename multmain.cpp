#include <iostream>
using namespace std;

static float mult(float value1, float value2) {
	return value1 * value2;
}

int main() {

	// 変数の宣言

	float value1 = 3.14;
	float value2 = 4;

	// 答えを入れておくための変数

	float answer = 0;

	// 表示

	answer = mult(value1, value2);
	cout << "掛け算の結果 : " << answer << "です。" << endl;

}