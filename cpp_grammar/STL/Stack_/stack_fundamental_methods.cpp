#include <iostream>
#include <stack>

using namespace std;

void test01() {
    stack<int> st;
    int i = 0;
    while (i < 10) {
        st.push(i + 1);
        i++;
    }
    cout << "st的栈顶元素为: " << st.top() << endl;
}

int main(int argc, char const *argv[]) {
    test01();
    return 0;
}
