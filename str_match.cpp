#include <iostream>
using namespace std;

const char* str_match(const char* s1, const char* s2)
{
	if (s1 == nullptr || s2 == nullptr) {
		return nullptr;
	}

	// s2が空の文字列の場合、s1の先頭を返す
	if (*s2 == '\0') {
		return s1;
	}

	for (const char* p = s1; *p != '\0'; ++p) {
		const char* p1 = p;;
		const char* p2 = s2;

		while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2) {
			++p1;
			++p2;
		}

		if (*p2 == '\0') {
			return p;
		}
	}

	return nullptr;
}

int main() {
	const char* s1 = "abcabcdef";
	const char* s2 = "abcd";

	const char* result = str_match(s1, s2);

	if (result != nullptr) {
		cout << "見つかりました: " << result << endl; // "abcdef" が出力される
		cout << "インデックス: " << (result - s1) << endl; // 3 が出力される
	}
	else {
		cout << "見つかりませんでした。" << endl;
	}

	return 0;
}
