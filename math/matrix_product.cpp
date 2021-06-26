#include <iostream>
#include <iomanip>

using namespace std;
const int N = 3;

int main(int argc, char const *argv[]) {
    double X[N][N] = {}, Y[N][N] = {}, Z[N][N] = {};

    cout << "The first matrix X is: " << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            X[i][j] = 1 / double(i + j + 1);
            cout << fixed << setprecision(3);
            cout << X[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "The second matrix Y is: " << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            Y[i][j] = 1;
            cout << fixed << setprecision(3);
            cout << Y[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "Their product is: " << endl;
    // 计算矩阵乘积
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            for (int k = 0; k < N; ++k) {
                Z[i][j] += X[i][k] * Y[k][j];
            }
            cout << fixed << setprecision(3);
            cout << Z[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}