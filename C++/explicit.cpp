#include <iostream>
using namespace std;
struct A
{
    A(int){}
    operator bool() const {return true;}
};

int main(){
    A a1(1);
    bool flag(a1);
    cout<<flag<<endl;
}