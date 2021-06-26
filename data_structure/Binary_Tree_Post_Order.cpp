#include <iostream>
#include <stack>
#include <vector>

using namespace std;

// 二叉树节点的结构体实现
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void test01() {
    TreeNode root;
    root.val = 10;
    TreeNode left1;
    root.left = &left1;
    cout << left1.val << endl;
}

int main(int argc, char const *argv[]) {
    test01();
    return 0;
}
