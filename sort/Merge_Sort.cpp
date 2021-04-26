#include <iostream>
#include <ctime>
using namespace std;

/*
归并排序基本思想
1. 

具体思路:



*/

// 递归实现归并排序算法
void MergeSort(int arr[], int L, int R)
{
    
}

// 此函数用于打印输出数组
void printArray(int arr[], int len)
{
    for (int i = 0; i < len; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    clock_t t0, t1;
    t0 = clock();
    // 定义数组
    int a[6] = {19, 97, 9, 17, 1, 8};
    // 定义数组长度
    int len = sizeof(a) / sizeof(int);
    // 输出原始数组
    printArray(a, len);
    // 进行快速排序
    MergeSort(a, 0, len - 1);
    // 输出排序后的数组
    printArray(a, len);
    t1 = clock();
    cout << "Time: " << double(t1 - t0) / CLOCKS_PER_SEC << "s" << endl;
    return 0;
}
