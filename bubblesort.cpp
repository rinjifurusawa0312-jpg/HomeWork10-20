#include <iostream>

using namespace std;

// バブルソート関数
int* bubbleSort(int* arr, int size) {
    if (arr == nullptr || size <= 0) {
        return arr;
    }

    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - 1 - i; ++j) {
            // 隣り合う要素を比較し、順序が逆であれば入れ替える
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // 戻り値として渡された配列のアドレスをそのまま返す
    return arr;
}

int main() {
    int numbers[] = { 5, 3, 8, 4, 2 };
    int size = sizeof numbers / sizeof numbers[0] ;

    cout << "ソート前: ";
    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // バブルソート関数の呼び出し（配列名自体が先頭要素のアドレスを指す）
    bubbleSort(numbers, size);

    cout << "ソート後: ";
    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}