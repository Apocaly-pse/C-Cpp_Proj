#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int n = 100000;// 投放点数
const double r = 1.0;// 圆的半径

int main() {
    double x, y;
    int m = 0;

    srand(time(0));
    for (int i = 1; i <= n; ++i) {
        x = r * double(rand()) / RAND_MAX;
        y = r * double(rand()) / RAND_MAX;
        if (x * x + y * y < r * r) m++;
    }
    cout << "pi is apprrroximately equal to " << 4 * m / double(n) << endl;

}