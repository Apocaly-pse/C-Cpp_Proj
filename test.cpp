#include <iostream>
using namespace std;

void test() {
    if (0)
    {
        cout<<"1";
        return;
    }
    else {
        return;
        cout<<2;
        return;
    }
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}
