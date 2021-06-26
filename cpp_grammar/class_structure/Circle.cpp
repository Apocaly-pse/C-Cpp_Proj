#include <iostream>

using namespace std;
const double PI = 3.14;

/*
设计圆类, 进行圆的周长计算
周长C=2*PI*半径
*/
class Circle {
    // public代表访问权限:公共权限
public:
    // 属性:半径
    int radius;

    // 行为
    double calc_perimeter() {
        return 2 * PI * radius;
    }
};

int main(int argc, char const *argv[]) {
    Circle c1;

    c1.radius = 10;
    cout << "c1" << "\'s perimeter is: " << c1.calc_perimeter();
    return 0;
}