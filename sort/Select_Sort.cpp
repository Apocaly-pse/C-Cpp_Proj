#include <iostream>

using namespace std;


void SelectSort(int arr[], int len) {

}


// 此函数用于打印输出数组
void printArray(int arr[], int len) {
    for (int i = 0; i < len; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[]) {
    const int len = 6;
    // 定义数组
    int a[len] = {19, 97, 9, 17, 1, 8};
    // 输出原始数组
    printArray(a, len);
    // 排序
    SelectSort(a, len);
    // 输出排序后的数组
    printArray(a, len);
    return 0;
}