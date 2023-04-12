#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
struct Base{
public:
    int a;
    int b;
    // bool operator<(Base& b1) {
    //     return b1.a < a;
    // }
    bool operator<(Base& b1);
};
bool operator<(Base& b1, Base& b2) {
    return b1.a < b2.a;
}
int main()
{
    vector<vector<int>> a(4, {1, 2, 3});
    int &&b = 1;
    int c = 1;
    int &d = c;
    cout << "b:" << &b << endl;
    cout << &d << " " << &c << endl;
    // cout << "a[0]:" << &a[0]<<endl;
    // cout << "a[1]:" << &a[1]<<endl;
    // cout << "a[0][0]:" << &a[0][0]<<endl;
    // cout << "a[0][1]:" << &a[0][1]<<endl;
    // cout << sizeof(&a[0])<<endl;
}
