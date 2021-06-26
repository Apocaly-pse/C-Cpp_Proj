#include <iostream>
#include <vector>

using namespace std;

void printArr(vector <vector<int>> &arr) {
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = 0; j < arr[i].size(); ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void triangle() {
    int N = 10;
    // vector<vector<int> > arr (10, vector<int> (10, 1));
    // for (int i = 0; i < N; ++i)
    // {
    //     for (int j = 0; j <= i; ++j)
    //     {
    //         arr[i][j]=1;
    //     }
    // }
    // printArr(arr);
    // return ;
    vector <vector<int>> arr;
    arr.resize(N);//N行
    for (int k = 0; k < N; ++k) {
        arr[k].resize(k + 1); //每行为k+1列
    }
    for (int i = 0; i < N; ++i) {
        arr[i][0] = 1;
        arr[i][i] = 1;
    }
    for (int i = 2; i < N; i++) {
        for (int j = 1; j < i; j++) {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }
    printArr(arr);
}

int main(int argc, char const *argv[]) {
    triangle();
    return 0;
}
