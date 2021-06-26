#include <iostream>

using namespace std;

void BubbleSort(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        int flag = 0;
        for (int j = 0; j < len - i; j++) {
            if (arr[j] > arr[j + 1]) {
                flag = 1;
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
        if (flag == 0) break;
    }
}

// 此函数用于打印输出数组
void printArray(int arr[], int len) {
    for (int i = 0; i < len; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int N = 3;
    int a[N] = {99, 1, 990};
    printArray(a, N);
    BubbleSort(a, N);
    printArray(a, N);
    return 0;
}
