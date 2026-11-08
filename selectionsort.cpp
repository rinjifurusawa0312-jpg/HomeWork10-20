#include <iostream>
using namespace std;

// 選択ソートを行う関数
int* selection_sort(int* arr, int size) {

    for (int i = 0; i < size - 1; i++) {
        int min_idx = i;

        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        if (min_idx != i) {
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }

    return arr;
}

// 使用例
int main() {
    int data[] = { 64, 25, 12, 22, 11 };
    int size = sizeof(data) / sizeof(data[0]);

    cout << "ソート前: ";
    for (int i = 0; i < size; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    int* sorted_arr = selection_sort(data, size);

    cout << "ソート後: ";
    for (int i = 0; i < size; i++) {
        cout << sorted_arr[i] << " ";
    }
    cout << endl;

}