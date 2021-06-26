#include <iostream>

using namespace std;


/*
const修饰指针: 常量指针  -> 指针指向的值不可以改,指针指向可以改
const修饰常量: 指针常量 -> 指针指向不可以改, 指针指向的值可以改
const指针和常量均修饰  -> 均不能改
*/
int main(int argc, char const *argv[]) {
    int a = 10;
    int b = 10;
    // // 这个是常量指针
    // const int *p=&a;
    // // *p=100;  -> 值不可以改
    // p = &b;  // 指向可以改

    // // 这个是指针常量
    // int * const p = &a;
    // // p = &b;  // 指向不可以改
    // *p = 20; // ->值可以改

    // 这个是const两者都修饰
    // const int * const p = &a;
    // p=&b;
    // *p = 20;
    cout << *p << endl;
    cout << endl;
    return 0;
}